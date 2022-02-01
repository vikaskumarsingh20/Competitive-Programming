
# ****THIS IS THE DICT INSIDE THE LIST ****

# data = {
#     "name": ["john", "ram", "Shyam", " vivek"],
#     "marks": [76, 87, 99, 89, ],
#     "braches": ["IT", "CS", "IT", "CS"]
# }
# name = input("Enter the student name:")
# for i in range(len(data["name"])):
#     if name == data["name"][i]:
#         print(data["marks"][i])

     # ***THIS IS THE JUST OPPOSITE THE MEANS LIST IS OUTER AND DICT INSIDE***
data = [
    {"name": "ram", "marks": {"maths": 98, "phy": 89}},
            {"name": "rohan", "marks": {"maths": 78, "phy": 56}},
            {"name": "sohan", "marks": {"maths": 95, "phy": 76}},
            {"name": "vivek", "marks": {"maths": 45, "phy": 78}}
]
total = 0

for i in range(len(data)):
         if data[i]["name"] == " name ":
                 for key in data[i]["marks"]:
                         name = data[i]["marks"][key]
                         total +=  "marks"
                         break
         print(total)
