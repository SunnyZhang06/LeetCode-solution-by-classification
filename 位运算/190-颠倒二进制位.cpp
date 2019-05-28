
3//190颠倒二进制位

uint32_t reverseBits(uint32_t n) 
{
	uint32_t res=0;
	for(int i=0;i<32;i++)
	{
		res<<=1;//每次左移一位（先移动把该位空出来再操作）
		if((n&1)==1)//n对应的位是1
			res++;
		n>>=1;//每次右移一位
		
		//先将n右移i位，然后通过与1来提取出该位，然后将其左移(32-i)位，就是翻转后应该在的位置
		//然后或上结果res（有1置1，全0置0）
		res |= ((n>>i)&1) << (32-i);
	}
	return res;
}

