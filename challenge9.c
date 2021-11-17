#include <stdio.h>

int main()
{
   int JJ , MM , AA ;
printf("entrer l jour est le moi et lanne :");
scanf("%d %d %d",&JJ,&MM,&AA);
printf("%d/%d/%d\n",JJ,MM,AA);
switch(MM){
    case 1: { printf("%d-january-%d",JJ,AA);
        break;
        }
     case 2: { printf("%d-february-%d",JJ,AA);
        break;
    }
     case 3: { printf("%d-march-%d",JJ,AA);
        break;
    }
     case 4: { printf("%d-april-%d",JJ,AA);
        break;
    }
     case 5: { printf("%d-may-%d",JJ,AA);
        break;
    }
     case 6: { printf("%d-june-%d",JJ,AA);
        break;
    }
     case 7: { printf("%d-july-%d",JJ,AA);
        break;
    }
     case 8: { printf("%d-august-%d",JJ,AA);
        break;
    }
     case 9: { printf("%d-september-%d",JJ,AA);
        break;
    }
     case 10: { printf("%d-october-%d",JJ,AA);
        break;
    }
     case 11: { printf("%d-novembre-%d",JJ,AA);
        break;
    }
     case 12: { printf("%d-november-%d",JJ,AA);
        break;
    }
    default : {
        printf("erore");
     break;
    }
    
}
    return 0;
}