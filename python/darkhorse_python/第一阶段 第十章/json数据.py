#coding:gbk
import json
dir={"name":"张三","age":18}
list=[{"name":"lisi","age":20},{"name":"wangwu","age":27}]
json_str=json.dumps(dir,ensure_ascii=False)
print(type(json_str))
print(json_str)

json_list=json.dumps(list,ensure_ascii=False)
print(type(json_list))
print(json_list)