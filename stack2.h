void InitStack2(Stack2 &st){
	st.Maxsize=20;
	st.base=new int[st.Maxsize];
	st.top=st.base;	
}
void push2(Stack2 &st,int e){
	if((st.top+1)-st.base>20)
	{	
		printf("栈的空间用完了！！");
		return; 
	} 
	*st.top=e;
	st.top++;
}
int pop2(Stack2 &st){
	if(st.base==st.top){
		printf("已经为空栈！！");
		return 0; 
	}
	st.top--;
	return *st.top; 	
}
int peek2(Stack2 &st){
	if(st.top==st.base){
			printf("已经为空栈！！");
			return 0; 
	}
	return *(st.top-1);
}
