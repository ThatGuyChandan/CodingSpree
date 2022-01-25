sentence=str(input("Enter the sentence:"))
str_list = sentence.split()
unique_words = set(str_list)
      
for words in unique_words :
    print('Frequency of ', words , 'is :', str_list.count(words))
    