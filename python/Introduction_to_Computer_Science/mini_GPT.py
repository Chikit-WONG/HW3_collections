import pprint

sample_text = "I love python I love you very much I love you very"

def tokenize(text):
  words = text.split(" ")
  return words
  
def build_GPT_DB(sentences, db):
    # devide this sentences into words
    words = tokenize(sentences)
    for i in range(len(words)-1):
        first_word = words[i]
        second_word = words[i+1]
        
        if first_word in db:
            prob_dict = db[first_word]
            if second_word in prob_dict:
                prob_dict[second_word] += 1
            else:
                prob_dict[second_word] = 1
        else:
            db[first_word] = {second_word: 1}
        
# pprint.pprint(GPT_DB)
import random

def select_top_from_list(sorted_prob_dict, top):
    # find min between top and len(sorted_prob_dict)
    min_val = min(top, len(sorted_prob_dict))
    ran_num = random.randint(0, min_val-1)
    return sorted_prob_dict[ran_num][0]

def infer(first_word, db, num_words):
    for i in range(num_words):
        if first_word in db:
            prob_dict = db[first_word]
            ##pprint.pprint(prob_dict)
            # sort the prob_dict by value
            sorted_prob_dict = sorted(prob_dict.items(),
                                    key=lambda x: x[1], reverse=True)
            
            next_word = select_top_from_list(sorted_prob_dict, 3)
            print(next_word, end=" ")
            first_word = next_word


def build_gpt_DB_from_file(filename, GPT_DB):
  # Open file
  
  with open(filename, "r") as file:
    for line in file:
      # print("training: ", line)
      build_GPT_DB(line, GPT_DB)
  
import os
def build_GPT_DB_from_directory(dir_name, GPT_DB):
  for filename in os.listdir(dir_name):
    if filename.endswith(".txt"):
      print("trainning from file: ", filename)
      build_gpt_DB_from_file(dir_name + "/" + filename, GPT_DB)
    else:
      print("passing: ", filename)

import json      
def store_GPT_DB_to_json_file(GPT_DB, filename):
  with open(filename, "w") as file:
    json.dump(GPT_DB, file)
    
def load_GPT_DB_from_json_file(josn_filename):
  if not os.path.exists(josn_filename):
    return None
  
  with open(josn_filename, "r") as file:
    return json.load(file)


GPT_DB_FILE="GPT_DB.json"

GPT_DB = load_GPT_DB_from_json_file(GPT_DB_FILE)
if GPT_DB is None:
  # Training from data
  print("I am training from data")
  GPT_DB = {}
  build_GPT_DB_from_directory("data", GPT_DB)
  store_GPT_DB_to_json_file(GPT_DB, "GPT_DB.json")

seed = "love"
infer(seed, GPT_DB, 30)