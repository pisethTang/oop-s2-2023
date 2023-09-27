#!/bin/bash

# Change to your Git repository directory
cd /home/sething2002/oop-s2-2023

# Add all changes
git add .

# Commit with a specified message
git commit -m "Add the executing process to the script."

# Push to the specified branch
git push origin workshop9

# Automating the process of creating executable and running it
chmod +x ./git_push_script.sh
./git_push_script.sh
