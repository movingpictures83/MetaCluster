def test(file1, file2):
   firstfile = open(file1, 'r')
   secondfile = open(file2, 'r')
   lines1 = set()
   lines2 = set()
   for line in firstfile:
      lines1.add(line)
   for line in secondfile:
      lines2.add(line)

   comb = lines1.intersection(lines2)

   # Some random number inconsistency; we will accept 75% accuracy
   if (len(comb) >= 0.75*len(lines2)):
      return True
   else:
      return False
