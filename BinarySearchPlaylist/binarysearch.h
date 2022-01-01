//Iterative Binary Search
int binarySearchIterative(int arr[],int start,int end,int k){
	while(end >= start){
		int mid = (start + end)/2;
		if(arr[mid] == k){
			return mid;
		}
		if(arr[mid] > k){
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}
	return -1;
}

// Recursive Binary Search
int binarySearchRecursive(int arr[],int start,int end,int k){
	if(start <= end){
		int mid = (end + start)/2;
		if(arr[mid] == k){
			return mid;
		} 
		if(arr[mid] > k){
			return binarySearch(arr,start,mid - 1,k);
		} 
		return binarySearch(arr,mid+ 1,end,k);
		 
	}
	return -1;
}

//order not known of the array, but array is sorted
//it maybe ascending or descending
int flagbinarysearch(int arr[],int start,int end,int k,string flag){
	while(end >= start){
		int mid = (start + end)/2;
		if(arr[mid] == k){
			return mid;
		} else if(arr[mid] > k){
			if(flag == "ASC")
				end = mid - 1;
			else
				start = mid + 1;
		} else {
			if(flag == "ASC")
				start = mid + 1;
			else
				end = mid - 1;
		}
	}
	return -1;
}

//Iterative Binary Search
int binarySearchDescending(int arr[],int start,int end,int k){
	while(end >= start){
		int mid = (start + end)/2;
		if(arr[mid] == k){
			return mid;
		}
		if(arr[mid] < k){
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}
	return -1;
}

//binary search between two indices
int binarysearchbetweenpoints(int arr[],int low,int high,int k){
	int mid;
	while(low <= high){
		mid = low + (high - low) / 2;
		if(arr[mid] == k){
			return mid;
		} else if(arr[mid] < k){
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	return -1;
}

//1 2 2 2 3 4 5
//answer should be 1
int firstoccurence(int arr[],int n,int k){
	//array is sorted
	int low = 0;
	int high = n - 1;
	int mid;
	int res = -1;
	while(low <= high){
		mid = low + (high - low)/2;
		if(arr[mid] == k){
			//on finding the element, move more to the left
			res = mid;
			high = mid - 1;
		} else if(arr[mid] < k){
			low = mid + 1;
		} else{
			high = mid - 1;
		}
	}
	return res;
}

//1 2 2 2 3 5
//answer should be 3
int lastoccurence(int arr[],int n, int k){
	//array is sorted
	int low = 0;
	int high = n - 1;
	int mid;
	int res = -1;
	while(low <= high){
		mid = low + (high - low)/2;
		if(arr[mid] == k){
			//on finding the element, move more to the right
			res = mid;
			low = mid + 1;
		} else if(arr[mid] < k){
			low = mid + 1;
		} else{
			high = mid - 1;
		}
	}
	return res;
}

int countofelementinsortedarray(int arr[],int n, int k){
	int last = lastoccurence(arr,n,k);
	int first = firstoccurence(arr,n,k);
	if(first >= 0)
		return last - first + 1;
	return -1;
}

//returns minimum element index in sorted rotated array
int noofrotationsinsortedarray(int arr[],int n){
    int start = 0;
    int end = n - 1;
    int mid;
    int mi = INT_MAX;
    int minindex = -1;
    while(start <= end){
        mid = start + (end - start)/2;
        if(arr[mid] <= arr[end]){
            end = mid - 1;
        } else {
            start = mid + 1;
        } 
        if(mi > arr[mid]){
            mi = arr[mid];
            minindex = mid;
        }
    }
    return minindex;
}