public static void main(String[] args) {
        // TODO code application logic here
        int a,b,c=0,d=0;
	System.out.print("enter a and b");
	Scanner in=new Scanner(System.in);
        a=in.nextInt();
        b=in.nextInt();
	while(a>0)
        {
            c=a-b;
            a=c;
            d++;
        }
        System.out.print(d);
