def is_palindrome(string_var):
	ret = None
	j=-1
	count = 0
	for i in range(len(string_var)):
		if string_var[i]==string_var[j]:
			count+=1
			j-=1
		else:
			break
	if count==len(string_var):
		ret=True
		return ret
	else:
		ret=False
		return ret

def histogram_letters(string_var):
	ret={}
	for i in range(len(string_var)):
		count=1
		if string_var[i]=="":
			continue
		for j in range(i+1 , len(string_var)):
			if string_var[j]=="":
				continue
			if string_var[i]==string_var[j]:
				count+=1
		if string_var[i] in ret:
			continue
		ret[string_var[i]]=count
	return ret

def get_most_frequent(list_var):
	ret=tuple
	max_val=0
	max_word=''
	for i in range(len(list_var)):
		count=1
		if list_var[i]=="" :
			continue
		for j in range(i+1, len(list_var)):
			if list_var[i]=="" :
				continue
			if list_var[i]==list_var[j] :
				count+=1
		if max_val<count :
			max_val=count
			max_word= list_var[i]
	return (max_word, max_val)

def which_duplicates(list_var):
	ret={}
	for i in range(len(list_var)):
		count=1
		if list_var[i]=="" :
			continue
		for j in range(i+1, len(list_var)):
			if list_var[i]=="" :
				continue
			if list_var[i]==list_var[j] :
				count+=1
		if list_var[i] in ret :
			continue
		ret[list_var[i]]=count
	return ret 

def compute_factorial(int_val):
	
	if int_val>1:
		return int_val*compute_factorial(int_val-1)
	else:
		return 1

def is_prime(int_val):
	ret= False
	count=0
	for i in range(2, int_val):
		if (int_val%i)!=0 :
			count+=1
		else:
			ret=False
			break
		print(i)
	#print(count)
	if count==int_val-2 :	
		ret= True
	return ret

prova=is_palindrome('itopinonavevanonipoti')
print(prova)

prova1=histogram_letters('cavallo')
print(prova1)

lists=["apple", "lemon", "apple", "orange", "apple", "orange", "apple"]
prova2=get_most_frequent(lists)
print(prova2)

prova3=which_duplicates(lists)
print(prova3)

prova4=compute_factorial(6)
print(prova4)

prova5=is_prime(5)
print(prova5)  
