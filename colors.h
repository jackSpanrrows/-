#include <stdio.h>

int colors_test(void)
{
	// insert code here...
    HANDLE hOut;  
 
    //  ��ȡ������ľ��
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);    
 
    printf("��ͨ��ɫ����n");
 
    SetConsoleTextAttribute(hOut,  
                            FOREGROUND_GREEN |      // ǰ��ɫ_��ɫ
                            FOREGROUND_INTENSITY ); // ǰ��ɫ_��ǿ
    printf("������ǳ��ɫ.n");  
    printf("��������֮���һֱ��ǳ��ɫn");
 
    SetConsoleTextAttribute(hOut,  
                            FOREGROUND_BLUE |       // ǰ��ɫ_��ɫ
                            FOREGROUND_INTENSITY |  // ǰ��ɫ_��ǿ
                            COMMON_LVB_UNDERSCORE); // ����»���
    printf("������ɫ���ټӸ��»���.n");    
 
    SetConsoleTextAttribute(hOut,  
                            FOREGROUND_RED |        // ǰ��ɫ_��ɫ
                            FOREGROUND_INTENSITY |  // ǰ��ɫ_��ǿ
                            BACKGROUND_BLUE );      // ����ɫ_��ɫ
    printf("�������ֺ�ɫ��������ɫn");  
 
    SetConsoleTextAttribute(hOut,  
                            FOREGROUND_RED |            // ǰ��ɫ_��ɫ
                            FOREGROUND_INTENSITY |      // ǰ��ɫ_��ǿ
                            COMMON_LVB_GRID_LVERTICAL );// ����_��_��
    printf("                      �� �� ����n");  
 
    SetConsoleTextAttribute(hOut,  
                            FOREGROUND_RED |            // ǰ��ɫ_��ɫ
                            FOREGROUND_INTENSITY |      // ǰ��ɫ_��ǿ
                            COMMON_LVB_GRID_RVERTICAL );// ����_��_��  
    printf("                      �� �� ����n");    
 
    SetConsoleTextAttribute(hOut,  
                            FOREGROUND_RED |    // ǰ��ɫ_��ɫ
                            FOREGROUND_GREEN |  // ǰ��ɫ_��ɫ
                            FOREGROUND_BLUE );  // ǰ��ɫ_��ɫ
    printf("�Ļذ�ɫn");  
 
    system("pause");
    return 0;  
}
