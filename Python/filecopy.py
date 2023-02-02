import sys

if len(sys.argv) != 3:
    print('Invalid arguments!')
    exit(0)

with open(sys.argv[1]) as infile:
    with open(sys.argv[2], 'w') as outfile:
        count = 1
        for line in infile:
            line = line[:-1] if line[-1] == '\n' else line
            outfile.write(f"{count}. {line} {len(line)}\n")
            count += 1