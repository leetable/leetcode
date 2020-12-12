def binary_search(L,target):
	low = 0
	high = len(L)-1
	while low<=high:
		mid = (low+high)//2
		if L[mid]<target:
			low=mid+1
		elif L[mid]>target:
			high=mid-1
		else:
			print("get target")
			return
	print("not exist")
	return

def main():
	L = [1,2,3,4,5,6,7,9,10]
	target = 20
	binary_search(L,target)

if __name__ == '__main__':
	main()