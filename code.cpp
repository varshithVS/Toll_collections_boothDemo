#include<windows.h>
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>

//display variables
GLfloat w=500,h=500,zy1=65,zy2=430,ey1=65,ey2=430;
int i,bmw,count=0;
// car nano variables
GLfloat ay=0,by1=480,by2=480,by3=460,by4=460,by5=460,by6=460,by7=420,by8=420,by9=420,by10=420,by11=400,by12=400,ax=0,bx=0;
GLfloat by13=403,by14=403,by15=416,by16=416,by17=403,by18=403,by19=416,by20=416,by21=463,by22=463,by23=476,by24=476,by25=463,by26=463,by27=476,by28=476;
// car VRL variables
GLfloat sy=0,hy1=480,hy2=480,hy3=460,hy4=460,hy5=460,hy6=460,hy7=420,hy8=420,hy9=420,hy10=420,hy11=400,hy12=400,sx=0,hx=0;
GLfloat hy13=403,hy14=403,hy15=416,hy16=416,hy17=403,hy18=403,hy19=416,hy20=416,hy21=463,hy22=463,hy23=476,hy24=476,hy25=463,hy26=463,hy27=476,hy28=476;
//car bmw variavles
GLfloat ay1=20,ay2=20,ay3=40,ay4=40,ay5=40,ay6=40,ay7=90,ay8=90,ay9=90,ay10=90,ay11=130,ay12=130;
GLfloat ay13=25,ay14=25,ay15=38,ay16=38,ay17=25,ay18=25,ay19=38,ay20=38,ay21=95,ay22=95,ay23=108,ay24=108,ay25=95,ay26=95,ay27=108,ay28=108;
//car tata variavles
GLfloat sy1=20,sy2=20,sy3=40,sy4=40,sy5=40,sy6=40,sy7=90,sy8=90,sy9=90,sy10=90,sy11=130,sy12=130;
GLfloat sy13=25,sy14=25,sy15=38,sy16=38,sy17=25,sy18=25,sy19=38,sy20=38,sy21=95,sy22=95,sy23=108,sy24=108,sy25=95,sy26=95,sy27=108,sy28=108;
//flag variables
GLint flagd=0,flaga=0,flagc=0,color1=0,flagl=0,flag2=0,flagr=0,flag3=0,flagdd=0,flagaa=0,flagcc=0,color11=0,flagll=0,flag22=0,flagrr=0,flag33=0;
GLfloat size=0.05,sizer=0.04,sizec=0.03,sizee=0.06,sizea=0.05,sizet=0.04;
//car 3 variables
GLfloat cy1=-20,cy2=-20,cy3=-40,cy4=-40,cy5=-40,cy6=-40,cy7=-90,cy8=-90,cy9=-90,cy10=-90,cy11=-110,cy12=-110,cy=5;//CAR 3
GLfloat cy13=-25,cy14=-25,cy15=-38,cy16=-38,cy17=-25,cy18=-25,cy19=-38,cy20=-38,cy21=-95,cy22=-95,cy23=-108,cy24=-108,cy25=-95,cy26=-95,cy27=-108,cy28=-108;
//track  3 variables
GLfloat vy1=-20,vy2=-20,vy3=-40,vy4=-40,vy5=-40,vy6=-40,vy7=-90,vy8=-90,vy9=-90,vy10=-90,vy11=-110,vy12=-110,vy=5;//CAR 3
GLfloat vy13=-25,vy14=-25,vy15=-38,vy16=-38,vy17=-25,vy18=-25,vy19=-38,vy20=-38,vy21=-95,vy22=-95,vy23=-108,vy24=-108,vy25=-95,vy26=-95,vy27=-108,vy28=-108;
//=====
static void key(unsigned char key, int x, int y);
void display();
	void drawstring(float x,float y,float z,char *string)
	{
		 char *c;
		 glRasterPos3f(x,y,z);
		 for(c=string;*c!='\0';c++)
	 {
	  		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,*c);
	 }
	}
	void drawstring1(float x,float y,float z,char *string)
	{
		 char *c;
	 	glRasterPos3f(x,y,z);
	 	for(c=string;*c!='\0';c++)
	 	{
	  glutBitmapCharacter(GLUT_BITMAP_8_BY_13,*c);
		 }
	}

	void drawstring2(float x,float y,float z,char *string)
	{
		 char *c;
	 	glRasterPos3f(x,y,z);
	 	for(c=string;*c!='\0';c++)
	 	 {
	  		glutBitmapCharacter(GLUT_BITMAP_9_BY_15,*c);
		 }
	}
	void mov()

{
	if(flagl==0)
	{
  	if(by9>380||by10>380||by11>380||by12>380)
		{


			by1=by1-sizer;
			by2=by2-sizer;
			by3=by3-sizer;
			by4=by4-sizer;
			by5=by5-sizer;
			by6=by6-sizer;
			by7=by7-sizer;
			by8=by8-sizer;
			by9=by9-sizer;
			by10=by10-sizer;
			by11=by11-sizer;
			by12=by12-sizer;
			by13=by13-sizer;//wheels
			by14=by14-sizer;
			by15=by15-sizer;
			by16=by16-sizer;
			by17=by17-sizer;
			by18=by18-sizer;
			by19=by19-sizer;
			by20=by20-sizer;
			by21=by21-sizer;
			by22=by22-sizer;
			by23=by23-sizer;
			by24=by24-sizer;
			by25=by25-sizer;
			by26=by26-sizer;
			by27=by27-sizer;
			by28=by28-sizer;
			zy2=zy2-sizer;
		}
	}
	if(flagl==1)
	{

		if(by9>1||by10>=1||by11>=1||by12>=1)
		{
			if(by1<270)
			flag2=0;
			by1=by1-sizer;
			by2=by2-sizer;
			by3=by3-sizer;
			by4=by4-sizer;
			by5=by5-sizer;
			by6=by6-sizer;
			by7=by7-sizer;
			by8=by8-sizer;
			by9=by9-sizer;
			by10=by10-sizer;
			by11=by11-sizer;
			by12=by12-sizer;
			by13=by13-sizer;//wheel
			by14=by14-sizer;
			by15=by15-sizer;
			by16=by16-sizer;
			by17=by17-sizer;
			by18=by18-sizer;
			by19=by19-sizer;
			by20=by20-sizer;
			by21=by21-sizer;
			by22=by22-sizer;
			by23=by23-sizer;
			by24=by24-sizer;
			by25=by25-sizer;
			by26=by26-sizer;
			by27=by27-sizer;
			by28=by28-sizer;
			zy2=zy2-sizer;
		}
	else
	{


			flagl=0;

		by1=480;
		by2=480;
		by3=460;
		by4=460;
		by5=460;
		by6=460;
		by7=420;
		by8=420;
		by9=420;
		by10=420;
		by11=400;
		by12=400;
		by13=403;//wheel
		by14=403;
		by15=416;
		by16=416;
		by17=403;
		by18=403;
		by19=416;
		by20=416;
		by21=463;
		by22=463;
		by23=476;
		by24=476;
		by25=463;
		by26=463;
		by27=476;
		by28=476;
		zy2=430;
	}

}

//---------------------VRL

if(flagll==0)
	{

		if(hy9>380||hy10>380||hy11>380||hy12>380)
		{


			hy1=hy1-sizea;
			hy2=hy2-sizea;
			hy3=hy3-sizea;
			hy4=hy4-sizea;
			hy5=hy5-sizea;
			hy6=hy6-sizea;
			hy7=hy7-sizea;
			hy8=hy8-sizea;
			hy9=hy9-sizea;
			hy10=hy10-sizea;
			hy11=hy11-sizea;
            hy12=hy12-sizea;
			hy13=hy13-sizea;//wheels
			hy14=hy14-sizea;
			hy15=hy15-sizea;
			hy16=hy16-sizea;
			hy17=hy17-sizea;
			hy18=hy18-sizea;
			hy19=hy19-sizea;
			hy20=hy20-sizea;
			hy21=hy21-sizea;
			hy22=hy22-sizea;
			hy23=hy23-sizea;
			hy24=hy24-sizea;
			hy25=hy25-sizea;
			hy26=hy26-sizea;
			hy27=hy27-sizea;
			hy28=hy28-sizea;
			ey2=ey2-sizea;
		}
	}
	if(flagll==1)
	{

		if(hy9>1||hy10>=1||hy11>=1||hy12>=1)
		{
			if(hy1<270)
			flag2=0;
			hy1=hy1-sizea;
			hy2=hy2-sizea;
			hy3=hy3-sizea;
			hy4=hy4-sizea;
			hy5=hy5-sizea;
			hy6=hy6-sizea;
			hy7=hy7-sizea;
			hy8=hy8-sizea;
			hy9=hy9-sizea;
			hy10=hy10-sizea;
			hy11=hy11-sizea;
			hy12=hy12-sizea;
			hy13=hy13-sizea;//wheel
			hy14=hy14-sizea;
			hy15=hy15-sizea;
			hy16=hy16-sizea;
			hy17=hy17-sizea;
			hy18=hy18-sizea;
			hy19=hy19-sizea;
			hy20=hy20-sizea;
			hy21=hy21-sizea;
			hy22=hy22-sizea;
			hy23=hy23-sizea;
			hy24=hy24-sizea;
			hy25=hy25-sizea;
			hy26=hy26-sizea;
			hy27=hy27-sizea;
			hy28=hy28-sizea;
			ey2=ey2-sizea;
		}
	else
	{


			flagll=0;

		hy1=480;
		hy2=480;
		hy3=460;
		hy4=460;
		hy5=460;
		hy6=460;
		hy7=420;
		hy8=420;
		hy9=420;
		hy10=420;
		hy11=400;
		hy12=400;
		hy13=403;//wheel
		hy14=403;
		hy15=416;
		hy16=416;
		hy17=403;
		hy18=403;
		hy19=416;
		hy20=416;
		hy21=463;
		hy22=463;
		hy23=476;
		hy24=476;
		hy25=463;
		hy26=463;
		hy27=476;
		hy28=476;
		ey2=430;
	}

}






//second car move

		if(flagr==0)
	{

		if(ay9<300||ay10<300||ay11<300||ay12<300)
		{


			ay1=ay1+size;
			ay2=ay2+size;
			ay3=ay3+size;
			ay4=ay4+size;
			ay5=ay5+size;
			ay6=ay6+size;
			ay7=ay7+size;
			ay8=ay8+size;
			ay9=ay9+size;
			ay10=ay10+size;
			ay11=ay11+size;
			ay12=ay12+size;
			ay13=ay13+size;//wheel
			ay14=ay14+size;
			ay15=ay15+size;
			ay16=ay16+size;
			ay17=ay17+size;
			ay18=ay18+size;
			ay19=ay19+size;
			ay20=ay20+size;
			ay21=ay21+size;
			ay22=ay22+size;
			ay23=ay23+size;
			ay24=ay24+size;
			ay25=ay25+size;
			ay26=ay26+size;
			ay27=ay27+size;
			ay28=ay28+size;
				cy=cy+size;
			zy1=zy1+size;

		}
	}
	if(flagr==1)
	{
		if(ay1<500||ay2<500||ay3<500||ay4<500)
		{
			if(ay1>370)
			flag3=0;
			ay1=ay1+size;
			ay2=ay2+size;
			ay3=ay3+size;
			ay4=ay4+size;
			ay5=ay5+size;
			ay6=ay6+size;
			ay7=ay7+size;
			ay8=ay8+size;
			ay9=ay9+size;
			ay10=ay10+size;
			ay11=ay11+size;
			ay12=ay12+size;
			ay13=ay13+size;
			ay14=ay14+size;
			ay15=ay15+size;
			ay16=ay16+size;
			ay17=ay17+size;
			ay18=ay18+size;
			ay19=ay19+size;
			ay20=ay20+size;
			ay21=ay21+size;
			ay22=ay22+size;
			ay23=ay23+size;
			ay24=ay24+size;
			ay25=ay25+size;
			ay26=ay26+size;
			ay27=ay27+size;
			ay28=ay28+size;
				cy=cy+size;
			zy1=zy1+size;

		}
	}

			if(flagc==0)
	{
		if(cy1<330 && cy1<cy)
		{

			cy1=cy1+sizec;
			cy2=cy2+sizec;
			cy3=cy3+sizec;
			cy4=cy4+sizec;
			cy5=cy5+sizec;
			cy6=cy6+sizec;
			cy7=cy7+sizec;
			cy8=cy8+sizec;
			cy9=cy9+sizec;
			cy10=cy10+sizec;
			cy11=cy11+sizec;
			cy12=cy12+sizec;
			cy13=cy13+sizec;//wheel
			cy14=cy14+sizec;
			cy15=cy15+sizec;
			cy16=cy16+sizec;
			cy17=cy17+sizec;
			cy18=cy18+sizec;
			cy19=cy19+sizec;
			cy20=cy20+sizec;
			cy21=cy21+sizec;
			cy22=cy22+sizec;
			cy23=cy23+sizec;
			cy24=cy24+sizec;
			cy25=cy25+sizec;
			cy26=cy26+sizec;
			cy27=cy27+sizec;
			cy28=cy28+sizec;
			}
	}
	if(flagc==1)
	{
		if(cy1>270)
			flag3=1;
		if(cy1<=499 && cy1<cy)
		{
			if(cy12>370)
				flag3=0;
					cy1=cy1+sizec;
			cy2=cy2+sizec;
			cy3=cy3+sizec;
			cy4=cy4+sizec;
			cy5=cy5+sizec;
			cy6=cy6+sizec;
			cy7=cy7+sizec;
			cy8=cy8+sizec;
			cy9=cy9+sizec;
			cy10=cy10+sizec;
			cy11=cy11+sizec;
			cy12=cy12+sizec;
			cy13=cy13+sizec;//wheel
			cy14=cy14+sizec;
			cy15=cy15+sizec;
			cy16=cy16+sizec;
			cy17=cy17+sizec;
			cy18=cy18+sizec;
			cy19=cy19+sizec;
			cy20=cy20+sizec;
			cy21=cy21+sizec;
			cy22=cy22+sizec;
			cy23=cy23+sizec;
			cy24=cy24+sizec;
			cy25=cy25+sizec;
			cy26=cy26+sizec;
			cy27=cy27+sizec;
			cy28=cy28+sizec;
		}

	else
	{	flagc=0;
		flag3=0;
		color1=1;
		cy1=-20;
		cy2=-20;
		cy3=-40;
		cy4=-40;
		cy5=-40;
		cy6=-40;
		cy7=-90;
		cy8=-90;
		cy9=-90;
		cy10=-90;
		cy11=-110;
		cy12=-110;
		cy13=-25;//wheel
		cy14=-25;
		cy15=-38;
		cy16=-38;
		cy17=-25;
		cy18=-25;
		cy19=-38;
		cy20=-38;
		cy21=-95;
		cy22=-95;
		cy23=-108;
		cy24=-108;
		cy25=-95;
		cy26=-95;
		cy27=-108;
		cy28=-108;

	}
	}


	if(flagrr==0)
	{

		if(sy9<300||sy10<300||sy11<300||sy12<300)
		{


			sy1=sy1+sizee;
			sy2=sy2+sizee;
			sy3=sy3+sizee;
			sy4=sy4+sizee;
			sy5=sy5+sizee;
			sy6=sy6+sizee;
			sy7=sy7+sizee;
			sy8=sy8+sizee;
			sy9=sy9+sizee;
			sy10=sy10+sizee;
			sy11=sy11+sizee;
			sy12=sy12+sizee;
			sy13=sy13+sizee;//wheel
			sy14=sy14+sizee;
			sy15=sy15+sizee;
			sy16=sy16+sizee;
			sy17=sy17+sizee;
			sy18=sy18+sizee;
			sy19=sy19+sizee;
			sy20=sy20+sizee;
			sy21=sy21+sizee;
			ay22=sy22+sizee;
			sy23=sy23+sizee;
			sy24=sy24+sizee;
			sy25=sy25+sizee;
			sy26=sy26+sizee;
			sy27=sy27+sizee;
			sy28=sy28+sizee;
				vy=vy+sizee;
			ey1=ey1+sizee;

		}
	}
	if(flagrr==1)
	{
		if(sy1<500||sy2<500||sy3<500||sy4<500)
		{
			if(sy1>370)
			flag33=0;
		    sy1=sy1+sizee;
		 	sy2=sy2+sizee;
			sy3=sy3+sizee;
			sy4=sy4+sizee;
			sy5=sy5+sizee;
			sy6=sy6+sizee;
			sy7=sy7+sizee;
			sy8=sy8+sizee;
			sy9=sy9+sizee;
			sy10=sy10+sizee;
			sy11=sy11+sizee;
			sy12=sy12+sizee;
			sy13=sy13+sizee;
			sy14=sy14+sizee;
			sy15=sy15+sizee;
			sy16=sy16+sizee;
			sy17=sy17+sizee;
			sy18=sy18+sizee;
			sy19=sy19+sizee;
			sy20=sy20+sizee;
			sy21=sy21+sizee;
			sy22=sy22+sizee;
			sy23=sy23+sizee;
			sy24=sy24+sizee;
			sy25=sy25+sizee;
			sy26=sy26+sizee;
			sy27=sy27+sizee;
			sy28=sy28+sizee;
				vy=vy+sizee;
			ey1=ey1+sizee;
		}
	}
    if(flagcc==0)
     {
        if(vy1<330 && vy1<vy)
          {
			vy1=vy1+sizet;
			vy2=vy2+sizet;
			vy3=vy3+sizet;
			vy4=vy4+sizet;
			vy5=vy5+sizet;
			vy6=vy6+sizet;
			vy7=vy7+sizet;
			vy8=vy8+sizet;
			vy9=vy9+sizet;
			vy10=vy10+sizet;
			vy11=vy11+sizet;
			vy12=vy12+sizet;
			vy13=vy13+sizet;//wheel
			vy14=vy14+sizet;
			vy15=vy15+sizet;
			vy16=vy16+sizet;
			vy17=vy17+sizet;
			vy18=vy18+sizet;
			vy19=vy19+sizet;
			vy20=vy20+sizet;
			vy21=vy21+sizet;
			vy22=vy22+sizet;
			vy23=vy23+sizet;
			vy24=vy24+sizet;
			vy25=vy25+sizet;
			vy26=vy26+sizet;
			vy27=vy27+sizet;
			vy28=vy28+sizet;
			}
     }
	   if(flagcc==1)
    	{
         if(vy1>270)
			flag33=1;
		if(vy1<=499 && vy1<vy)
		{
			if(vy12>370)
				flag33=0;
            vy1=vy1+sizet;
			vy2=vy2+sizet;
			vy3=vy3+sizet;
			vy4=vy4+sizet;
			vy5=vy5+sizet;
			vy6=vy6+sizet;
			vy7=vy7+sizet;
			vy8=vy8+sizet;
			vy9=vy9+sizet;
			vy10=vy10+sizet;
			vy11=vy11+sizet;
			vy12=vy12+sizet;
			vy13=vy13+sizet;//wheel
			vy14=vy14+sizet;
			vy15=vy15+sizet;
			vy16=vy16+sizet;
			vy17=vy17+sizet;
			vy18=vy18+sizet;
			vy19=vy19+sizet;
			vy20=vy20+sizet;
			vy21=vy21+sizet;
			vy22=vy22+sizet;
			vy23=vy23+sizet;
			vy24=vy24+sizet;
			vy25=vy25+sizet;
			vy26=vy26+sizet;
			vy27=vy27+sizet;
			vy28=vy28+sizet;
		}

	else
	{	flagcc=0;
		flag33=0;
		color11=1;
		vy1=-20;
		vy2=-20;
		vy3=-40;
		vy4=-40;
		vy5=-40;
		vy6=-40;
		vy7=-90;
		vy8=-90;
		vy9=-90;
		vy10=-90;
		vy11=-110;
		vy12=-110;
		vy13=-25;//wheel
		vy14=-25;
		vy15=-38;
		vy16=-38;
		vy17=-25;
		vy18=-25;
		vy19=-38;
		vy20=-38;
		vy21=-95;
		vy22=-95;
		vy23=-108;
		vy24=-108;
		vy25=-95;
		vy26=-95;
		vy27=-108;
		vy28=-108;

	}
	}
	glutPostRedisplay();
}


void mouse(int btn, int state, int x, int y)
{
	if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
				flagr=1;
				flag3=1;
	if(btn==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
				flagl=1;
				flag2=1;
    if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
				flagrr=1;
				flag33=1;
	if(btn==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
				flagll=1;
				flag22=1;



}


void reshape (int w, int h)
{


	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if(w<=h)
		gluOrtho2D(0.0,500.0,0.0*(GLfloat)h/(GLfloat)w, 500.0*(GLfloat)h/(GLfloat)w);
	else
		gluOrtho2D(0.0*(GLfloat)w/(GLfloat)h, 500.0*(GLfloat)w/(GLfloat)h, 0.0,500.0);
	glMatrixMode(GL_MODELVIEW);

}

void init(void)
{
	glClearColor(0.1, 0.5, 0.1, 0.0);
	glShadeModel(GL_SMOOTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,500,0,500);
	glMatrixMode(GL_MODELVIEW);
}
int main(int argc,char **argv)
{

        glutInit(&argc,argv);
        glutInitWindowSize(1200,600);
		glutInitWindowPosition(100,70);
		glutCreateWindow("Toll collecting booth");
		printf("TOLL COUNTING BOOTH DETAILS\n");
		init();
		glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
		glutDisplayFunc(display);
		glutMouseFunc(mouse);
		glutReshapeFunc(reshape);
        glutIdleFunc(mov);
        glutKeyboardFunc(key);
        glutMainLoop();

}
//for(int i=0;i<=10;i++)
//{

static void key(unsigned char key1, int x, int y)
{
	switch(key1)
	{
		case 'Q':
		case 'q':
		    printf("\n\nTOTAL VAICALES DETAILS IS %d\n\n",count);
			exit(0);

			break;

		case 'r':
		case 'R':
				flagl=1;
				flag2=1;
                  count++;
                  printf("\n CAR NAME NANO %d",count);
					break;




		case 'l':
		case 'L':
				flagr=1;
				 flag3=1;
				 count++;
                  printf("\n CAR NAME BMW %d",count);

				 break;

		case 'z':
		case 'Z':
				size=size*2;
					break;
		case 'x':
		case 'X':
				size=size/2;
					break;

		 case 'u':
         case 'U':
              flagrr=1;
              flag33=1;
              count++;
                  printf("\n TRAK NAME TATA %d",count);
               break;


         case 'k':
         case 'K':
               sizee=sizee*2;

					break;

		 case 'f':
         case 'F':
               sizee=sizee/2;
                  break;

		case 'n':
		case 'N':
				sizer=sizer*2;

					break;
		case 'm':
		case 'M':
				sizer=sizer/2;
					break;

		case 'p':
        case 'P':
                flagll=1;
                flag22=1;
                count++;
                  printf("\n TRAK NAME VRL %d",count);
                 break;



        case 'a':
        case 'A':
             sizea=sizea*2;

                 break;

        case 'g':
        case 'G':
            sizea=sizea/2;
                 break;


		case 'v':
		case 'V':
				sizec=sizec*2;

					break;
		case 'b':
		case 'B':
				sizec=sizec/2;
					break;

		case 'j':
        case 'J':
              sizet=sizet*2;

                   break;

        case 't':
        case 'T':
            sizet=sizet/2;
                  break;

		case '1':flaga=1;
				break;

		case '2':flagd=1;
			break;

        case '7':flagdd=1;
               break;

		case '0':flagc=1;
		 count++;
                  printf("\n CAR NAME  pink %d",count);
		 		break;

		case '5':flagcc=1;
		 count++;
                  printf("\n TRAK NAME RED %d",count);
		  break;


   	}


}
	void welcome()
	{
			glClear(GL_COLOR_BUFFER_BIT);
			glColor3f(1.0,0.5,0.5);
	 		drawstring(160,360,1.0,"VISVESVARAYA TECHNOLOGICAL UNIVERSITY BELGAVI, KARNATAKA -590 018");
			glColor3f(1.1,0.0,1.0);
	 		drawstring(320,290,1.0," COMPUTER GRAPICH MINI PROJECT:");
               glColor3f(0.1,1.1,1.1);
	 		drawstring(360,250,1.0," TOLL COLLECTING BOOTH ");
	 		glColor3f(0.1,0.0,0.0);

            drawstring(230,160,0.0,"DEPARTMENT OF COMPUTER SCIENCE & ENGINEERING");
            drawstring(330,180,0.0," Nanjangud Taluk, Mysuru – 571302");
            drawstring(200,200,0.0,"MAHARAJA INSTITUTE OF TECHNOLOGY THANDAVAPURA NH 766,");

	 		drawstring2(700,20,0.0,"For Next Press:1");


	}

		void frontscreen()
	{
			 glClear(GL_COLOR_BUFFER_BIT);

        glColor3f(1.0,0.5,0.5);
	 		drawstring(400,430,0.0,"COMPUTER GRAPICH");

	 	glColor3f(1.0,1.0,1.0);
	 		drawstring(10,350,0.0," SUBMITTED BY: ");

	 	glColor3f(0.0,0.0,0.0);
	 		drawstring(200,320,0.0," VARSHITH S (4MN19CS409)");
               drawstring(210,290,0.0,"CHANDAN M (4MN19CS402)");

	 	glColor3f(1.0,1.0,1.0);
	 		drawstring(10,230,0.0,"Under the Guidance of:");
	 	glColor3f(0.0,0.0,0.0);
	 		drawstring(200,200,0.0,"Prof. BHARATH BHARADWAJ B S");
	 		drawstring(260,170,0.0,"(Assistant Professor");
	 		drawstring(270,150,0.0,"  Dept.of CS&E");
	 		drawstring(260,130,0.0,"MIT Thandavapura) ");
	 	glColor3f(0.0,0.0,0.0);
	 		drawstring(20,90,0.0,"YEAR:");
        glColor3f(3.0,1.0,0.0);
	 		drawstring(80,90,0.0,"2021");
		glColor3f(1.0,0.0,0.0);
	 		drawstring(300,60,0.0,"For Next press: 2");

		glFlush();
	}
	void color()
	{
		glColor3f(0.0,0.0,1.0);
		if(color1==1)
			glColor3f(0.7,0.2,0.5);
        if(color11==1)
			glColor3f(1.7,0.2,1.5);
	}

	void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
 if(flaga==0)
	{
		welcome();
	}
	else
	{

		if(flagd==0)
			frontscreen();
		else
		{
		glClearColor(0.0,0.6,0.0,1.0);

		glColor3f(0.658824,0.658824,0.658824);
	    	glBegin(GL_POLYGON);
	    		glVertex2f(100,500);
	    		glVertex2f(400,500);
	    		glVertex2f(400,0);
	    		glVertex2f(100,0);
		glEnd();
		glColor3f(0.658824,0.658824,0.658824);
	    	glBegin(GL_POLYGON);
	    		glVertex2f(400,800);
	    		glVertex2f(800,800);
	    		glVertex2f(800,0);
	    		glVertex2f(300,0);
		glEnd();

		glColor3f(1.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glVertex2f(100,365);
				glVertex2f(110,365);
				glVertex2f(110,330);
				glVertex2f(100,330);
			glEnd();
		glColor3f(1.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glVertex2f(390,365);
				glVertex2f(400,365);
				glVertex2f(400,330);
				glVertex2f(390,330);
			glEnd();
			glColor3f(1.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glVertex2f(245,365);
				glVertex2f(260,365);
				glVertex2f(260,330);
				glVertex2f(245,330);
			glEnd();
			glColor3f(1.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glVertex2f(530,365);
				glVertex2f(520,365);
				glVertex2f(520,330);
				glVertex2f(530,330);
			glEnd();
			glColor3f(1.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glVertex2f(670,365);
				glVertex2f(660,365);
				glVertex2f(660,330);
				glVertex2f(670,330);
			glEnd();


		glColor3f(0.5,0.5,1.0);
		glBegin(GL_QUADS);
				glVertex2f(bx+290,by1);
				glVertex2f(bx+340,by2);
				glVertex2f(bx+340,by3);
				glVertex2f(bx+290,by4);
			glEnd();
		glBegin(GL_QUADS);
				glVertex2f(bx+280,by5);
				glVertex2f(bx+350,by6);
				glVertex2f(bx+350,by7);
				glVertex2f(bx+280,by8);
			glEnd();
			glBegin(GL_QUADS);
				glVertex2f(bx+290,by9);
				glVertex2f(bx+340,by10);
				glVertex2f(bx+340,by11);
				glVertex2f(bx+290,by12);
			glEnd();
				glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(bx+285,by13);//rt cr tp lft wl
				glVertex2f(bx+290,by14);
				glVertex2f(bx+290,by15);
				glVertex2f(bx+285,by16);
			glEnd();
			glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(bx+340,by17);//rt cr tp rt wl
				glVertex2f(bx+345,by18);
				glVertex2f(bx+345,by19);
				glVertex2f(bx+340,by20);
			glEnd();
			glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(bx+285,by21);//rt cr btm lft wel
				glVertex2f(bx+290,by22);
				glVertex2f(bx+290,by23);
				glVertex2f(bx+285,by24);
			glEnd();
			glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(bx+340,by25);//rt cr btm rt wel
				glVertex2f(bx+345,by26);
				glVertex2f(bx+345,by27);
				glVertex2f(bx+340,by28);
			glEnd();
					//car name
				glColor3f(1.0,1.0,1.0);
				drawstring1(bx+300,zy2,0,"NANO");


				//----------------------------------

				glColor3f(1.0,1.0,1.0);
			glBegin(GL_QUADS);

				glVertex2f(ax+140,ay1);
				glVertex2f(ax+190,ay2);
				glVertex2f(ax+190,ay3);
				glVertex2f(ax+140,ay4);
			glEnd();
			glBegin(GL_QUADS);
				glVertex2f(ax+130,ay5);
				glVertex2f(ax+200,ay6);
				glVertex2f(ax+200,ay7);
				glVertex2f(ax+130,ay8);
			glEnd();
			glBegin(GL_QUADS);
				glVertex2f(ax+140,ay9);
				glVertex2f(ax+190,ay10);
				glVertex2f(ax+190,ay11);
				glVertex2f(ax+140,ay12);
			glEnd();
			//left car name
				glColor3f(1.0,0.0,1.0);
				drawstring1(ax+155,zy1,0,"BMW");

		//wheel
			glBegin(GL_QUADS);
			glColor3f(0.0,0.0,0.0);
				glVertex2f(ax+135,ay13);//lft cr btm
				glVertex2f(ax+140,ay14);//lt wel
				glVertex2f(ax+140,ay15);
				glVertex2f(ax+135,ay16);
			glEnd();
			glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(ax+190,ay17);//lft cr btm rt wel
				glVertex2f(ax+195,ay18);
				glVertex2f(ax+195,ay19);
				glVertex2f(ax+190,ay20);
			glEnd();

	        glBegin(GL_QUADS);
	        	glColor3f(0.0,0.0,0.0);
				glVertex2f(ax+135,ay25);//left cr top
				glVertex2f(ax+140,ay26);//lft wel
				glVertex2f(ax+140,ay27);
				glVertex2f(ax+135,ay28);
			glEnd();
			glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(ax+190,ay25);//lft car top rt wel
				glVertex2f(ax+195,ay26);
				glVertex2f(ax+195,ay27);
				glVertex2f(ax+190,ay28);
			glEnd();
				// car3
		//color();

		glColor3f(1.0,0.0,1.0);
		glBegin(GL_QUADS);

			glVertex2f(ax+140,cy1);
			glVertex2f(ax+190,cy2);
			glVertex2f(ax+190,cy3);
			glVertex2f(ax+140,cy4);
		glEnd();
			glBegin(GL_QUADS);
			glVertex2f(ax+130,cy5);
			glVertex2f(ax+200,cy6);
			glVertex2f(ax+200,cy7);
			glVertex2f(ax+130,cy8);
		glEnd();
		glBegin(GL_QUADS);
			glVertex2f(ax+140,cy9);
			glVertex2f(ax+190,cy10);
			glVertex2f(ax+190,cy11);
			glVertex2f(ax+140,cy12);
		glEnd();
		//wheel
		glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.0);
			glVertex2f(ax+135,cy13);//lft cr btm
			glVertex2f(ax+140,cy14);//lt wel
			glVertex2f(ax+140,cy15);
			glVertex2f(ax+135,cy16);
		glEnd();
		glBegin(GL_QUADS);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(ax+190,cy17);//lft cr btm rt wel
			glVertex2f(ax+195,cy18);
			glVertex2f(ax+195,cy19);
			glVertex2f(ax+190,cy20);
		glEnd();

        glBegin(GL_QUADS);
        	glColor3f(0.0,0.0,0.0);
			glVertex2f(ax+135,cy21);//left cr top
			glVertex2f(ax+140,cy22);//lft wel
			glVertex2f(ax+140,cy23);
			glVertex2f(ax+135,cy24);
		glEnd();
		glBegin(GL_QUADS);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(ax+190,cy25);//lft car top rt wel
			glVertex2f(ax+195,cy26);
			glVertex2f(ax+195,cy27);
			glVertex2f(ax+190,cy28);
		glEnd();

//----------------------------------------------------------------------------------------------------new
		glColor3f(2.0,0.9,0.0);
		glBegin(GL_QUADS);
				glVertex2f(hx+430,hy1);
				glVertex2f(hx+480,hy2);
				glVertex2f(hx+480,hy3);
				glVertex2f(hx+430,hy4);
			glEnd();
		glBegin(GL_QUADS);
				glVertex2f(hx+430,hy5);
				glVertex2f(hx+480,hy6);
				glVertex2f(hx+480,hy7);
				glVertex2f(hx+430,hy8);
			glEnd();
			glBegin(GL_QUADS);
				glVertex2f(hx+430,hy9);
				glVertex2f(hx+480,hy10);
				glVertex2f(hx+480,hy11);
				glVertex2f(hx+430,hy12);
			glEnd();
				glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(hx+485,hy13);//rt cr tp lft wl
				glVertex2f(hx+480,hy14);
				glVertex2f(hx+480,hy15);
				glVertex2f(hx+485,hy16);
			glEnd();
			glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(hx+430,hy17);//rt cr tp rt wl
				glVertex2f(hx+425,hy18);
				glVertex2f(hx+425,hy19);
				glVertex2f(hx+430,hy20);
			glEnd();
			glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(hx+485,hy21);//rt cr btm lft wel
				glVertex2f(hx+480,hy22);
				glVertex2f(hx+480,hy23);
				glVertex2f(hx+485,hy24);
			glEnd();
			glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(hx+430,hy25);//rt cr btm rt wel
				glVertex2f(hx+425,hy26);
				glVertex2f(hx+425,hy27);
				glVertex2f(hx+430,hy28);
			glEnd();
					//car name
				glColor3f(1.0,1.0,1.0);
				drawstring1(hx+440,ey2,0,"VRL");




			//left side car
			glColor3f(2.0,0.9,0.6);
			glBegin(GL_QUADS);

				glVertex2f(sx+635,sy1);
				glVertex2f(sx+585,sy2);
				glVertex2f(sx+585,sy3);
				glVertex2f(sx+635,sy4);
			glEnd();
			glBegin(GL_QUADS);
				glVertex2f(sx+635,sy5);
				glVertex2f(sx+585,sy6);
				glVertex2f(sx+585,sy7);
				glVertex2f(sx+635,sy8);
			glEnd();
			glBegin(GL_QUADS);
				glVertex2f(sx+635,sy9);
				glVertex2f(sx+585,sy10);
				glVertex2f(sx+585,sy11);
				glVertex2f(sx+635,sy12);
			glEnd();
			//left car name
				glColor3f(1.0,0.0,1.0);
				drawstring1(sx+600,ey1,0,"TATA");

		//wheel
			glBegin(GL_QUADS);
			glColor3f(0.0,0.0,0.0);
				glVertex2f(sx+635,sy13);//lft cr btm
				glVertex2f(sx+640,sy14);//lt wel
				glVertex2f(sx+640,sy15);
				glVertex2f(sx+635,sy16);
			glEnd();
			glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(sx+580,sy17);//lft cr btm rt wel
				glVertex2f(sx+585,sy18);
				glVertex2f(sx+585,sy19);
				glVertex2f(sx+580,sy20);
			glEnd();

	        glBegin(GL_QUADS);
	        	glColor3f(0.0,0.0,0.0);
				glVertex2f(sx+635,sy25);//left cr top
				glVertex2f(sx+640,sy26);//lft wel
				glVertex2f(sx+640,sy27);
				glVertex2f(sx+635,sy28);
			glEnd();
			glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(sx+580,sy25);//lft car top rt wel
				glVertex2f(sx+585,sy26);
				glVertex2f(sx+585,sy27);
				glVertex2f(sx+580,sy28);
			glEnd();





		//---------------
				// car3
		//color();

		color();
		glColor3f(2.0,0.0,0.0);
		glBegin(GL_QUADS);

			glVertex2f(sx+635,vy1);
			glVertex2f(sx+585,vy2);
			glVertex2f(sx+585,vy3);
			glVertex2f(sx+635,vy4);
		glEnd();
			glBegin(GL_QUADS);
			glVertex2f(sx+635,vy5);
			glVertex2f(sx+585,vy6);
			glVertex2f(sx+585,vy7);
			glVertex2f(sx+635,vy8);
		glEnd();
		glBegin(GL_QUADS);
			glVertex2f(sx+635,vy9);
			glVertex2f(sx+585,vy10);
			glVertex2f(sx+585,vy11);
			glVertex2f(sx+635,vy12);
		glEnd();
		//wheel
		glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.0);
			glVertex2f(sx+635,vy13);//lft cr btm
			glVertex2f(sx+640,vy14);//lt wel
			glVertex2f(sx+640,vy15);
			glVertex2f(sx+635,vy16);
		glEnd();
		glBegin(GL_QUADS);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(sx+580,vy17);//lft cr btm rt wel
			glVertex2f(sx+585,vy18);
			glVertex2f(sx+585,vy19);
			glVertex2f(sx+580,vy20);
		glEnd();

        glBegin(GL_QUADS);
        	glColor3f(0.0,0.0,0.0);
			glVertex2f(sx+635,vy21);//left cr top
			glVertex2f(sx+640,vy22);//lft wel
			glVertex2f(sx+640,vy23);
			glVertex2f(sx+635,vy24);
		glEnd();
		glBegin(GL_QUADS);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(sx+580,vy25);//lft car top rt wel
			glVertex2f(sx+585,vy26);
			glVertex2f(sx+585,vy27);
			glVertex2f(sx+580,vy28);
		glEnd();

			// display instruction for left car

				glColor3f(0.0,0.0,0.0);
				drawstring1(ax+0,140,0,"Car pink");
				drawstring1(ax+0,130,0,"instructions:");
		 		drawstring1(ax+0,120,0,"0:open barrier");
		 		drawstring1(ax+0,110,0,"v:speed up");
				drawstring1(ax+0,100,0,"b:speed down");
			//display instructions for car nano
				glColor3f(0.0,0.0,0.0);
				drawstring1(ax+0,60,0,"Car BMW");
				drawstring1(ax+0,50,0,"instructions:");
		 		drawstring1(ax+0,40,0,"l:open barrier");
		 		drawstring1(ax+0,30,0,"z:speed up");
				drawstring1(ax+0,20,0,"x:speed down");

				//display instructions for car tata

				glColor3f(0.0,0.0,0.0);
				drawstring1(ax+590,60,0,"track tata");
				drawstring1(ax+590,50,0,"instructions:");
		 		drawstring1(ax+590,40,0,"U:open barrier");
		 		drawstring1(ax+590,30,0,"K:speed up");
				drawstring1(ax+590,20,0,"F:speed down");


				glColor3f(0.0,0.0,0.0);
				drawstring1(ax+800,60,0,"track RED ");
				drawstring1(ax+800,50,0,"instructions:");
		 		drawstring1(ax+800,40,0,"5:open barrier");
		 		drawstring1(ax+800,30,0,"J:speed up");
				drawstring1(ax+800,20,0,"T:speed down");
			// display instruction for left car

				glColor3f(0.0,0.0,0.0);
				drawstring1(ax+290,60,0,"Car nano");
				drawstring1(ax+290,50,0,"instructions:");
		 		drawstring1(ax+290,40,0,"r:open barrier");
		 		drawstring1(ax+290,30,0,"n:speed up");
				drawstring1(ax+290,20,0,"m:speed down");

			//	display instruction for left car

				glColor3f(0.0,0.0,0.0);
				drawstring1(ax+430,60,0,"track VRL");
				drawstring1(ax+430,50,0,"instructions:");
		 		drawstring1(ax+430,40,0,"P:open barrier");
		 		drawstring1(ax+430,30,0,"A:speed up");
				drawstring1(ax+430,20,0,"G:speed down");



		if(flagl==0||flag2==0)
			{

		//BARRIER 1
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glVertex2f(260,355);
				glVertex2f(390,355);
				glVertex2f(390,345);
				glVertex2f(260,345);
			glEnd();
			glPointSize(20.0);
			glColor3f(1.0,0.0,0.0);

			glEnd();


	 					drawstring(375,310,0,"STOP");


		}
	     else
	     {
	     	glColor3f(0.0,1.5,0.0);
	     	glPointSize(20.0);


			glEnd();
	 					drawstring(375,310,0,"GO");



	     }


	     //-------

	     if(flagll==0||flag22==0)
			{

		//BARRIER 1
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glVertex2f(520,355);
				glVertex2f(400,355);
				glVertex2f(400,345);
				glVertex2f(520,345);
			glEnd();
			glPointSize(27.0);
			glColor3f(1.0,0.0,0.0);

			glEnd();


	 					drawstring(517,310,0,"STOP");

		}
	     else
	     {
	     	glColor3f(0.0,1.5,0.0);
	     	glPointSize(27.0);


			glEnd();
	 					drawstring(517,310,0,"GO");

	     }


		//BARRIER 2

			if(flagr==0||flag3==0)
			{
		glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glVertex2f(110,355);
				glVertex2f(245,355);
				glVertex2f(245,345);
				glVertex2f(110,345);
			glEnd();
			glPointSize(20.0);
			glColor3f(1.0,0.0,0.0);
			glBegin(GL_POINTS);
			glVertex2f(80,345);
			glEnd();
			drawstring(8,330,0,"STOP");
			}
			else
	     {
	     		glPointSize(20.0);
			glColor3f(0.0,1.5,0.0);
			glBegin(GL_POINTS);
			glVertex2f(80,345);
			glEnd();

	 					drawstring(10,330,0,"GO");

	     }

	     //BARRIER 2

			if(flagrr==0||flag33==0)
			{
		glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glVertex2f(530,355);
				glVertex2f(660,355);
				glVertex2f(660,345);
				glVertex2f(530,345);
			glEnd();
			glPointSize(27.0);
			glColor3f(1.0,0.0,0.0);

			glEnd();
			drawstring(700,330,0,"STOP");
			}
			else
	     {
	     		glPointSize(27.0);
			glColor3f(0.0,1.5,0.0);

			glEnd();

	 					drawstring(700,330,0,"GO");



	     }


		}
	 }

	 	glFlush();

}


