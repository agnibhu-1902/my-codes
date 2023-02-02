infile = input('Enter input file name: ')
outfile = input('Enter output file name: ')
filein = open(infile)
fileout = open(outfile, 'w')
for line in filein:
    fileout.write(line)
filein.close()
fileout.close()