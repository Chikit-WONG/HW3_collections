import random

sample_text = """
once upon a time in a small village there lived a clever fox and a lazy dog the villagers admired the fox for its intelligence and often sought its advice the dog on the other hand spent most of its days sleeping under a tree
one day the village was facing a severe drought the worried villagers approached the clever fox for help the fox thought for a while and suggested that they dig a well near the river the villagers agreed and started to work together
the lazy dog watched the villagers work and often barked at them from the shade of its favorite tree the villagers grew tired of the dogs constant barking and wished it would help them instead
as days passed the villagers efforts paid off and they finally found water their hard work had saved the village from the drought they celebrated their success and thanked the clever fox for its guidance
the clever fox and the lazy dog continued to live in the village but the villagers began to see the dog in a new light they realized the importance of hard work and helping each other in times of need and so the clever fox and the lazy dog became a part of the villages history and folklore
In each of the stages of this pipeline, datasets, and algorithms are used resulting in a trained model. The first stage consists of pretraining, where all the computational work is carried out using thousands of GPUs over months of training and millions of dollars.
"""
def get_top_3(next_word_dict):
    # Find top 3 max values
    top_3_list = []
    max_value = 0
    for key in next_word_dict:
        if next_word_dict[key] > max_value:
            max_value = next_word_dict[key]
    for key in next_word_dict:
        if next_word_dict[key] == max_value:
            top_3_list.append(key)
    return top_3_list

# from string let get word list
word_list = sample_text.split()
gpt_db = {}

# Write 2-gram tupules from the word_list
for i in range(len(word_list) - 1):
    if word_list[i] in gpt_db:
        next_word_dict = gpt_db[word_list[i]]
        if word_list[i + 1] in next_word_dict:
            next_word_dict[word_list[i + 1]] += 1
        else:
            next_word_dict[word_list[i + 1]] = 1
    else:
        gpt_db[word_list[i]] = {word_list[i + 1]: 1}


in_s = input("Enter a word: ")

# get next words for 100 times
for i in range(100):
    next_word_dict = gpt_db[in_s]
    
    # Find top 3 max values
    top_3_list = get_top_3(next_word_dict)
   
    # Select one from top 3 randomly
    next_word = random.choice(top_3_list)
    
    print(next_word, end=" ")
    in_s = next_word