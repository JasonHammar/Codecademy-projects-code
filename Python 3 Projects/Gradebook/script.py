#last semester gradebook
last_semester_gradebook = [["politics", 80], ["latin", 96], ["dance", 97], ["architecture", 65]]

#This semester's subjects
subjects = ["physics", "calculus", "poetry", "history"]
grades = [98, 97, 85, 88]

#Gradebook for current semester
gradebook = [[subjects[0], grades[0]], [subjects[1], grades[1]], [subjects[2], grades[2]], [subjects[3], grades[3]]]

#Adds computer science and visual arts to gradebook
gradebook.append(["computer science", 100])
gradebook.append(["visual arts", 93])

#Changes value of the last grade by five
gradebook[-1][-1] += 5

#Removes Poetry grade and replaces with pass
gradebook[2].remove(85)
gradebook[2].append("Pass")

#Combines last semester and current semester gradebooks
full_gradebook = last_semester_gradebook + gradebook

print(full_gradebook)
