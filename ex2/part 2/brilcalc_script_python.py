import re

f = open("brilcalc.log")
data = f.readlines() # Lists all odf the data in the file

result = ""
# Let's extract the line with the relevant information
# The script uses regex to detect the line above the correct value, then extracts the one below it with the value
pattern = r"^(\| nfill )(.*)"

for num, line in enumerate(data, 1):
    if re.match(pattern, line):
        result = data[num + 1] # extracts the line with our value of interest

# Let's finally isolate the value and print it
result = float(result.replace(" ","").lstrip("|").rstrip().rstrip("|").split("|")[-1]) 
print(f"Luminosity: {result:.1f} fb^-1")




