infile, outfile = None, None
try:
    infile = open('infile.txt')
    outfile = open('outfile.txt', 'w')
    nl, nw, nc = 0, 0, 0
    for line in infile:
        nl += 1
        nc += len(line)
        words = line.split()
        nw += len(words)
    outfile.write(f'Number of lines: {nl}\n')
    outfile.write(f'Number of words: {nw}\n')
    outfile.write(f'Number of characters: {nc}')
except:
    print('Error in file!')
finally:
    if infile != None:
        infile.close()
    if outfile != None:
        outfile.close()