/* gunakan fungsi pada master.cpp tambahkan fungsi dibawah dan int main */

void Hapus (List *L){
/* hapus nilai pertama list (deletefirst) jika element list (n%2==0) 
 dan menghapus nilai terakhir list(deletelast) jika element list (n%3==0) */
}

int main(){
	List L;
	createList(&L);

	//Soal D
	int n,x;
	cin>>n;
	for (int i =0;i<n;i++){
		cin>>x;	
		insertLast(&L,x);
	}
	Hapus(&L);
	printInfo(L);
}