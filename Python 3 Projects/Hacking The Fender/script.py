# Author: Jason Hammar
# Created: 8/8/23
# Last Updated: 8/8/23
# This program will showcase how python can work with different ypes of files.
# It will show how to read and write from text files, csv files, and json files.
# This project was done on codecademy under the project "Hacking The Fender"

import csv
import json

compromised_users = []
# The with block will open passwords.csv and copy the contents of the file and append it to the compromised_users list.
with open('passwords.csv') as password_file:
  password_csv = csv.DictReader(password_file)
  for password_row in password_csv:
    compromised_users.append(password_row['Username'])
# This with block will open a text file and write to it all of the compromised users.
with open('compromised_users.txt', 'w') as compromised_user_file:
  for user in compromised_users:
    compromised_user_file.write(user)
# This with block populates a json file with a message to the boss by putting a dictionary in it.
with open('boss_message.json', 'w') as boss_message:
    boss_message_dict = {'recipient': 'The Boss', 'message': 'Mission Success'}
    json.dump(boss_message_dict, boss_message)
# This with block creates a new passwords file with some weird figures and such.
with open('new_passwords.csv', 'w') as new_passwords_obj:
    slash_null_sig = """
      _  _     ___   __  ____             
/ )( \   / __) /  \(_  _)            
) \/ (  ( (_ \(  O ) )(              
\____/   \___/ \__/ (__)             
 _  _   __    ___  __ _  ____  ____  
/ )( \ / _\  / __)(  / )(  __)(    \ 
) __ (/    \( (__  )  (  ) _)  ) D ( 
\_)(_/\_/\_/ \___)(__\_)(____)(____/ 
        ____  __     __   ____  _  _ 
 ___   / ___)(  )   / _\ / ___)/ )( \
(___)  \___ \/ (_/\/    \\___ \) __ (
       (____/\____/\_/\_/(____/\_)(_/
 __ _  _  _  __    __                
(  ( \/ )( \(  )  (  )               
/    /) \/ (/ (_/\/ (_/\             
\_)__)\____/\____/\____/
    """
    new_passwords_obj.write((slash_null_sig))
