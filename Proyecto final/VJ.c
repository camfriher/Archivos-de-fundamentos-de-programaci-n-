// Batalla naval con matrices
#include <stdio.h>
#include <windows.h> // permite borrar la pantalla y cambiar el color 
#include <conio.h> // permite el getch
#include <stdbool.h>
// proyecto final en c videojuego batalla naval
int main()
{
	
	char aa=160, ai= 161, ao=162, au=163, tl= 240, esi= 201, esd= 187, lv= 186, eii= 200, eid= 188, an= 164;
	int OP,cor, cor1,  barco, barco2, Bool, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, x, y; 
	
	do // pantalla de bienvenida
	{
		system("Color 07"); // color blanco de letra
		system ("cls");
		printf("\n          *                        *****         **** **********    ****  **     **           **** ");
		printf("\n     _____*_____                   ***  **      ***** **********   *****  **     **          ***** ");
		printf("\n          *                        *** **      *   **     **      *   **  **     **         *   ** ");
		printf("\n         %c*%c                       *****      *******     **     *******  **     **        ******* ", tl, tl);
		printf("\n        %c%c*%c%c                      ***  **   ********     **    ********  **     **       ******** ", tl, tl, tl, tl);
		printf("\n         %c*%c                       ***  **  ****   **     **   ****   **  *****  *****   ****   ** ", tl, tl);
		printf("\n          *                        *****   ***     **     **  ***     **  *****  *****  ***     ** ");
		printf("\n  %c-------*-------%c                                                                              ", esi, esd);
		printf("\n  %c       *       %c                                                                              ", lv, lv);
		printf("\n  %c       *       %c                   *****    **        ****  **     **      ****  **           ", lv, lv);
		printf("\n  %c       *       %c                   ** **    **       *****  **    **      *****  **           ", lv, lv);
		printf("\n  %c       *       %c                   **  **   **      *   **  **   **      *   **  **           ", lv, lv);
		printf("\n   %c      *      %c                    **   **  **     *******  **  **      *******  **           ", lv, lv);
		printf("\n   %c      *      %c                    **    ** **    ********  ** **      ********  **           ", lv, lv);
		printf("\n   %c      *      %c                    **     ****   ****   **  ****      ***    **  *****        ", lv, lv);
		printf("\n    %c     *     %c                     **      ***  ***     **  ***      ***     **  *****        ", lv, lv);
		printf("\n    %c     *     %c                                                                                ", lv, lv);
		printf("\n ---%c=====*=====%c---                                                                             ",eii, eid );
		printf("\n       %c%c%c%c%c%c%c       ==                     Jugar............(1)                            ", lv, lv, lv, lv, lv, lv, lv);
		printf("\n %c%c%c%c%c%c   %c   %c%c%c%c%c==                       Instructivo......(2)                            ", lv, lv, lv, lv, lv, lv, lv, lv, lv, lv, lv, lv);
		printf("\n%c         %c      == %c                       Salir............(3)                            ", lv, lv, lv);
		printf("\n%c         %c    ==   %c ==                                                                        ", lv, lv, lv);
		printf("\n%c         %c        ===                                                                           ", lv, lv);
		printf("\n%c         %c         %c                                                                           ", lv, lv, lv);
		printf("\n%c         %c         %c                                                                           ", lv, lv, lv);
		printf("\n%c         %c         %c                                                                           ", lv, lv, lv);
		printf("\n %c%c       %c       %c%c                                                                          ", lv, lv, lv, lv, lv);
		printf("\n   %c%c%c%c   %c   %c%c%c%c                                                                        ", lv, lv, lv, lv, lv, lv, lv, lv, lv);
		printf("\n       %c%c%c%c%c%c%c                 Free software made by Fr%cas on a busy afternoon 2021         ", lv, lv, lv, lv, lv, lv, lv, ai);
		scanf ("\n %i",&OP);
		
		switch(OP)//menú de opciones 
		{
			case 2: //instructivo
				system("Color 07"); // color blanco de letra
				system ("cls"); // Borrar todo lo que había en pantalla
				printf ("\n \t Bienvenido al basto y ancho mar podr%c no parecer muy grande pero tanto esconderse como buscar requiere cierta habilidad y mucha suerte",aa);
				printf(" \n \n \t Las instrucciones son simples el tablero de arriba representa un mapa donde est%c tu enemigo el de abajo es tu mapa donde estar%cs t%c.", aa, aa, au);
				printf (" \n \n \t Escribe las coordenadas donde te ubicas y reza porque no te encuentren despues preparate para de tratar evitar que vuelva a intentarlo de nuevo escribiendo las coordenadas donde podria estar");
				int ejemplo [11][11] ={{0,1,2,3,4,5,6,7,8,9,10}, {1,0,0,0,0,0,0,0,0,0,0}, {2,0,0,0,0,0,0,0,0,0,0}, {3,0,0,0,0,0,0,0,0,0,0}, {4,0,0,0,0,0,0,0,0,0,0}, {5,0,0,0,0,0,0,0,0,0,0}, {6,0,0,0,0,0,0,0,0,0,0}, {7,0,0,0,0,0,0,0,0,0,0}, {8,0,0,0,0,0,0,0,0,0,0}, {9,0,0,0,0,0,0,0,0,0,0}, {10,0,0,0,0,0,0,0,0,0,0}};
				int i,j,k,l, OP;  
				printf("\n \n ");
				for(i=0;i<11;i++)
				{
					for(j=0;j<11;j++)
					{
						printf("\t %i ",ejemplo[i][j]);
					}
					printf ("\n");
				}
				printf ("\n \n"); // espacio entre los tableros
				system("Color 01"); // color azul de letra
				for(i=0;i<11;i++)
				{
					for(j=0;j<11;j++)
					{
						printf("\t %i ",ejemplo[i][j]);
					}
					printf("\n");
				}
				system("Color 07"); // color blanco de letra
				getch ();
			break;
			case 1: // código de todo el juego 
			system ("cls");
			
			char matriz1 [11][11] ={{'-','A','B','C','D','E','F','G','H','I','J'}, {'A','O','O','O','O','O','O','O','O','O','O'}, {'B','O','O','O','O','O','O','O','O','O','O'}, {'C','O','O','O','O','O','O','O','O','O','O'}, {'D','O','O','O','O','O','O','O','O','O','O'}, {'E','O','O','O','O','O','O','O','O','O','O'}, {'F','O','O','O','O','O','O','O','O','O','O'}, {'G','O','O','O','O','O','O','O','O','O','O'}, {'H','O','O','O','O','O','O','O','O','O','O'}, {'I','O','O','O','O','O','O','O','O','O','O'}, {'J','O','O','O','O','O','O','O','O','O','O'}};
			char matriz2 [11][11] ={{'-','A','B','C','D','E','F','G','H','I','J'}, {'A','O','O','O','O','O','O','O','O','O','O'}, {'B','O','O','O','O','O','O','O','O','O','O'}, {'C','O','O','O','O','O','O','O','O','O','O'}, {'D','O','O','O','O','O','O','O','O','O','O'}, {'E','O','O','O','O','O','O','O','O','O','O'}, {'F','O','O','O','O','O','O','O','O','O','O'}, {'G','O','O','O','O','O','O','O','O','O','O'}, {'H','O','O','O','O','O','O','O','O','O','O'}, {'I','O','O','O','O','O','O','O','O','O','O'}, {'J','O','O','O','O','O','O','O','O','O','O'}};
			char matriz3 [11][11] ={{'-','A','B','C','D','E','F','G','H','I','J'}, {'A','O','O','O','O','O','O','O','O','O','O'}, {'B','O','O','O','O','O','O','O','O','O','O'}, {'C','O','O','O','O','O','O','O','O','O','O'}, {'D','O','O','O','O','O','O','O','O','O','O'}, {'E','O','O','O','O','O','O','O','O','O','O'}, {'F','O','O','O','O','O','O','O','O','O','O'}, {'G','O','O','O','O','O','O','O','O','O','O'}, {'H','O','O','O','O','O','O','O','O','O','O'}, {'I','O','O','O','O','O','O','O','O','O','O'}, {'J','O','O','O','O','O','O','O','O','O','O'}};
			char matriz4 [11][11] ={{'-','A','B','C','D','E','F','G','H','I','J'}, {'A','O','O','O','O','O','O','O','O','O','O'}, {'B','O','O','O','O','O','O','O','O','O','O'}, {'C','O','O','O','O','O','O','O','O','O','O'}, {'D','O','O','O','O','O','O','O','O','O','O'}, {'E','O','O','O','O','O','O','O','O','O','O'}, {'F','O','O','O','O','O','O','O','O','O','O'}, {'G','O','O','O','O','O','O','O','O','O','O'}, {'H','O','O','O','O','O','O','O','O','O','O'}, {'I','O','O','O','O','O','O','O','O','O','O'}, {'J','O','O','O','O','O','O','O','O','O','O'}};
			
			int posicion1 [11][11] ={{0,1,2,3,4,5,6,7,8,9,10}, {1,0,0,0,0,0,0,0,0,0,0}, {2,0,0,0,0,0,0,0,0,0,0}, {3,0,0,0,0,0,0,0,0,0,0}, {4,0,0,0,0,0,0,0,0,0,0}, {5,0,0,0,0,0,0,0,0,0,0}, {6,0,0,0,0,0,0,0,0,0,0}, {7,0,0,0,0,0,0,0,0,0,0}, {8,0,0,0,0,0,0,0,0,0,0}, {9,0,0,0,0,0,0,0,0,0,0}, {10,0,0,0,0,0,0,0,0,0,0}};
			int posicion2 [11][11] ={{0,1,2,3,4,5,6,7,8,9,10}, {1,0,0,0,0,0,0,0,0,0,0}, {2,0,0,0,0,0,0,0,0,0,0}, {3,0,0,0,0,0,0,0,0,0,0}, {4,0,0,0,0,0,0,0,0,0,0}, {5,0,0,0,0,0,0,0,0,0,0}, {6,0,0,0,0,0,0,0,0,0,0}, {7,0,0,0,0,0,0,0,0,0,0}, {8,0,0,0,0,0,0,0,0,0,0}, {9,0,0,0,0,0,0,0,0,0,0}, {10,0,0,0,0,0,0,0,0,0,0}};
			int Barco11 [5][2]= {{0,0},{0,0},{0,0},{0,0},{0,0}};
			int Barco12 [4][2]= {{0,0},{0,0},{0,0},{0,0}};
			int Barco13 [3][3]= {{0,0},{0,0},{0,0}};
			int Barco14 [3][3]= {{0,0},{0,0},{0,0}};
			int Barco15 [3][10]= {{0,0},{0,0}};
			int Barco21 [5][3]= {{0,0},{0,0},{0,0},{0,0},{0,0}};
			int Barco22 [4][3]= {{0,0},{0,0},{0,0},{0,0}};
			int Barco23 [3][3]= {{0,0},{0,0},{0,0}};
			int Barco24 [3][3]= {{0,0},{0,0},{0,0}};
			int Barco25 [2][3]= {{0,0},{0,0}};
			
			cor=1;
			do 
			{
					switch (cor)
					{
							case 1:
												system ("Color 0A");
												system("cls");
												printf ("\n \t Coordenadas jugador 1, porfavor no te equivoques ");
												printf ("\n \t \t Inserta las coordenadas de tus barcos divididas por comas \n ");
												printf ("\n Coordenadas del primer barco (5): ");
												printf ("\n \t 1ra:_");// pedir coordenadas del primer barco
												scanf ("%i,%i", &a, &b);
												matriz1 [a][b]='X';
												Barco11 [1][1] = a;
												Barco11 [1][2] = b;
												printf ("\n \t 2da:_");
												scanf ("%i,%i", &c, &d);
												matriz1 [c][d]='X';
												Barco11 [2][1] = c;
												Barco11 [2][2] = d;
												
												if (d==b-1 && a==c && b>=5)
												{
													printf("\n \t 3ra:_%i,%i \n", a, b-2);
													matriz1 [a][b-2]='X';
													Barco11 [3][1] = a;
													Barco11 [3][2] = b-2;
													printf("\n \t 4ta:_%i,%i \n", a, b-3);
													matriz1 [a][b-3]='X';
													Barco11 [4][1] = a;
													Barco11 [4][2] = b-3;
													printf("\n \t 5ta:_%i,%i \n", a, b-4);
													matriz1 [a][b-4]='X';
													Barco11 [5][1] = a;
													Barco11 [5][2] = b-4;
													cor=2;
													getch ();
												}
												
												if(d==b+1 && a==c && b<=6)
													{
														printf("\n \t 3ra:_%i,%i \n", a, b+2);
														matriz1 [a][b+2]='X';
														Barco11 [3][1] = a;
														Barco11 [3][2] = b+2;
														printf("\n \t 4ta:_%i,%i \n", a, b+3);
														matriz1 [a][b+3]='X';
														Barco11 [4][1] = a;
														Barco11 [4][2] = b+3;
														printf("\n \t 5ta:_%i,%i \n", a, b+4);
														matriz1 [a][b+4]='X';
														Barco11 [5][1] = a;
														Barco11 [5][2] = b+4;
														cor=2;
														getch ();
													}
													
												if (c==a-1 && b==d && a>=5)
												{
													printf("\n \t 3ra:_%i,%i \n", a-2, b);
													matriz1 [a-2][b]='X';
													Barco11 [3][1] = a-2;
													Barco11 [3][2] = b;
													printf("\n \t 4ta:_%i,%i \n", a-3, b);
													matriz1 [a-3][b]='X';
													Barco11 [4][1] = a-3;
													Barco11 [4][2] = b;
													printf("\n \t 5ta:_%i,%i \n", a-4, b);
													matriz1 [a-4][b]='X';
													Barco11 [5][1] = a-4;
													Barco11 [5][2] = b;
													cor=2;
													getch ();
												}
												if (c==a+1 && b==d && a<=6)
												{
														printf("\n \t 3ra:_%i,%i \n", a+2, b);
														matriz1 [a+2][b]='X';
														Barco11 [3][1] = a+2;
														Barco11 [3][2] = b;
														printf("\n \t 4ta:_%i,%i \n", a+3, b);
														matriz1 [a+3][b]='X';
														Barco11 [3][1] = a+3;
														Barco11 [3][2] = b;
														printf("\n \t 5ta:_%i,%i \n", a+4, b);
														matriz1 [a+4][b]='X';
														Barco11 [3][1] = a+4;
														Barco11 [3][2] = b;
														cor=2;
														getch ();
												}
														
												if(cor!=2) 
												{
														cor=6;
												}
												printf ("\n \t %i ", cor);
												
							break;
							
							case 2:
													
											
											// fin de pedir coordenadas de primer barco 
											system("cls");
											printf ("\n \t Coordenadas del segundo barco (4):");// pedir coordenadas del segundo barco
											printf ("\n \t 1ra:_");
											scanf ("%i,%i", &e, &f);
											Barco12 [1][1] = e;
											Barco12 [1][2] = f;
												matriz1 [e][f]='X';
												printf ("\n \t 2da:_");
												scanf ("%i,%i", &g, &h);
												Barco12 [2][1] = g;
												Barco12 [2][2] = h;
												matriz1 [g][h]='X';
												if (h==f-1 && e==g && f>=4)
												{
													printf("\n \t 3ra:_%i,%i \n", e, f-2);
													matriz1 [e][f-2]='X';
													Barco12 [3][1] = e;
													Barco12 [3][2] = f-2;
													printf("\n \t 4ta:_%i,%i \n", e, f-3);
													matriz1 [e][f-3]='X';
													Barco12 [4][1] = e;
													Barco12 [4][2] = f-3;
													cor=3;
													getch ();
												}
												
												if(h==f+1 && e==g && f<=7)
													{
														printf("\n \t 3ra:_%i,%i \n", e, f+2);
														matriz1 [e][f+2]='X';
														Barco12 [3][1] = e;
														Barco12 [3][2] = f+2;
														printf("\n \t 4ta:_%i,%i \n", e, f+3);
														matriz1 [e][f+3]='X';
														Barco12 [4][1] = e;
														Barco12 [4][2] = f+3;
														cor=3;
														getch ();
													}
													
													if (g==e-1 && f==h && e>=4)
													{
														printf("\n \t 3ra:_%i,%i \n", e-2, f);
														matriz1 [e-2][f]='X';
														Barco12 [3][1] = e-2;
														Barco12 [3][2] = f;
														printf("\n \t 4ta:_%i,%i \n", e-3, f);
														matriz1 [e-3][f]='X';
														Barco12 [4][1] = e-3;
														Barco12 [4][2] = f;
														cor=3;
														getch ();
													}
															if (g=e+1 && f==h && e<=7)
															{
																printf("\n \t 3ra:_%i,%i \n", e+2, f);
																matriz1 [e+2][f]='X';
																Barco12 [3][1] = e+2;
																Barco12 [3][2] = f;
																printf("\n \t 4ta:_%i,%i \n", e+3, f);
																matriz1 [e+3][f]='X';
																Barco12 [4][1] = e+3;
																Barco12 [4][2] = f;
																cor=3;
																getch ();
															}
												if(cor!=3) 
												{
														cor=6;
												}
												printf ("\n \t %i ", cor);
							break;						
												// fin de las coordenadas segundo barco
							case 3:
											system("cls");
											printf (" \t Coordenadas del tercer barco (3): ");
											printf ("\n \t 1ra:_");
											scanf ("%i,%i", &i, &j);
											matriz1 [i][j]='X';
											Barco13 [1][1] = i;
											Barco13 [1][2] = j;
											printf ("\n \t 2da:_");
											scanf ("%i,%i", &k, &l);
											matriz1 [k][l]='X';
											Barco13 [2][1] = k;
											Barco13 [2][2] = l;
											if (l==j-1 && i==k && j>=3)
											{
												printf("\n \t 3ra:_%i,%i \n", i, j-2);
												matriz1 [i][j-2]='X';
												Barco13 [3][1] = i;
												Barco13 [3][2] = j-2;
												cor=4;
												getch ();
											}
											if(l==j+1 && i==k && j<=8)
												{
													printf("\n \t 3ra:_%i,%i \n", i, j+2);
													matriz1 [i][j+2]='X';
													Barco13 [3][1] = i;
													Barco13 [3][2] = j+2;
													cor=4;
													getch ();
												}
												
												if (k==i-1 && j==l && i>=3)
												{
													printf("\n \t 3ra:_%i,%i \n", i-2, j);
													matriz1 [i-2][j]='X';
													Barco13 [3][1] = i-2;
													Barco13 [3][2] = j;
													cor=4;
													getch ();
												}
												
														if (k=i+1 && j==l && i<=8)
														{
															printf("\n \t 3ra:_%i,%i \n", i+2, j);
															matriz1 [i+2][j]='X';
															Barco13 [3][1] = i+2;
															Barco13 [3][2] = j;
															cor=4;
															getch ();
														}
												if(cor!=4) 
												{
														cor=6;
												}
												printf ("\n \t %i ", cor);
													
												
						break;						
											// fin de las coordenadas 4to barco
						case 4:
											system("cls");
											printf("\t Coordenadas del cuarto barco (3):");
											printf ("\n \t 1ra:_");
											scanf ("%i,%i", &m, &n);
											matriz1 [m][n]='X';
											Barco14 [1][1] = m;
											Barco14 [1][2] = n;
											printf ("\n \t 2da:_");
											scanf ("%i,%i", &o, &p);
											matriz1 [o][p]='X';
											Barco14 [2][1] = o;
											Barco14 [2][2] = p;
											if (p==n-1 && m==o && n>=3)
											{
												printf("\n \t 3ra:_%i,%i \n", m, n-2);
												matriz1 [m][n-2]='X';
												Barco14 [3][1] = m;
												Barco14 [3][2] = n-2;
												cor=5;
												getch ();
											}
											if(p==n+1 && m==o && n<=8)
												{
													printf("\n \t 3ra:_%i,%i \n", m, n+2);
													matriz1 [m][n+2]='X';
													Barco14 [3][1] = m;
													Barco14 [3][2] = n+2;
													cor=5;
													getch ();
												}
												if (o==m-1 && n==p && m>=3)
												{
													printf("\n \t 3ra:_%i,%i \n", m-2, n);
													matriz1 [m-2][n]='X';
													Barco14 [3][1] = m-2;
													Barco14 [3][2] = n;
													cor=5;
													getch ();
												}
												
												
												if (o=m+1 && n==p && m<=8)
												{
														printf("\n \t 3ra:_%i,%i \n", m+2, n);
														matriz1 [m+2][n]='X';
														Barco14 [3][1] = m+2;
														Barco14 [3][2] = n;
														cor=5;
														getch ();
												}
												if(cor!=5) 
												{
														cor=6;
												}
												printf ("\n \t %i ", cor);
													
						break;						
											// fin de las coordenadas del cuarto barco
						case 5:
											 system("cls");
											 printf(" \t Coordenadas del quinto barco (2): ");
											 printf ("\n \t 1ra:_");
											scanf ("%i,%i", &q, &r);
											printf ("\n \t 2da:_");
											scanf ("%i,%i", &s, &t);
												matriz1 [q][r]='X';
												matriz1 [s][t]='X';
												Barco15 [1][1] = q;
												Barco15 [1][2] = r;
												Barco15 [2][1] = s;
												Barco15 [2][2] = t;
												cor=8;
												getch ();
						break;
						
						case 6:
								system ("cls");
								system ("Color 04");
								printf ("\a \n \t Tu barco no puede estar en pedazos dejale eso al rival y por equivocarte vas de nuevo al principio \n \t presiona enter");
								cor=1;
								getch ();
						break;
				}
			}
			while (cor <7);
				
			getch ();// fin de las coordenadas del jugador 1
			system ("cls");
			printf ("\n \t Tu tablero ser%c: ", aa);// Tablero con barcos 
			printf("\n \n ");
				for(i=0;i<11;i++)
				{
					for(j=0;j<11;j++)
					{
						printf("\t %c ",matriz1[i][j]);
					}
					printf ("\n");
				}
				getch ();
								
				
				cor1=1;
				do
				{
						switch (cor1)
						{
								case 1:

										system ("cls");
										system ("Color 0B"); // Color azul claro
										printf ("\n \t Coordenadas jugador 2, porfavor no te equivoques o ambos volver%cn al comienzo", aa);
										printf ("\n \t \t Inserta las coordenadas de tus barcos divididas por comas \n ");
										printf ("\n Coordenadas del primer barco (5): ");
										printf ("\n \t 1ra:_");// pedir coordenadas del primer barco
										scanf ("%i,%i", &a, &b);
										matriz2 [a][b]='X';
										Barco21 [1][1] = a;
										Barco21 [1][2] = b;
										printf ("\n \t 2da:_");
										scanf ("%i,%i", &c, &d);
										matriz2 [c][d]='X';
										Barco21 [2][1] = c;
										Barco21 [2][2] = d;
										if (d==b-1 && a==c && b>=5)
										{
											printf("\n \t 3ra:_%i,%i \n", a, b-2);
											matriz2 [a][b-2]='X';
											Barco21 [3][1] = a;
											Barco21 [3][2] = b-2;
											printf("\n \t 4ta:_%i,%i \n", a, b-3);
											matriz2 [a][b-3]='X';
											Barco21 [4][1] = a;
											Barco21 [4][2] = b-3;
											printf("\n \t 5ta:_%i,%i \n", a, b-4);
											matriz2 [a][b-4]='X';
											Barco21 [5][1] = a;
											Barco21 [5][2] = b-4;
											cor1=2;
											getch ();
										}
										if(d==b+1 && a==c && b<=6)
											{
												printf("\n \t 3ra:_%i,%i \n", a, b+2);
												matriz2 [a][b+2]='X';
												Barco21 [3][1] = a;
												Barco21 [3][2] = b+2;
												printf("\n \t 4ta:_%i,%i \n", a, b+3);
												matriz2 [a][b+3]='X';
												Barco21 [4][1] = a;
												Barco21 [4][2] = b+3;
												printf("\n \t 5ta:_%i,%i \n", a, b+4);
												matriz2 [a][b+4]='X';
												Barco21 [5][1] = a;
												Barco21 [5][2] = b+4;
												cor1=2;
												getch ();
											}
										if (c==a-1 && b==d && a>=5)
										{
											printf("\n \t 3ra:_%i,%i \n", a-2, b);
											matriz2 [a-2][b]='X';
											Barco21 [3][1] = a-2;
											Barco21 [3][2] = b;
											printf("\n \t 4ta:_%i,%i \n", a-3, b);
											matriz2 [a-3][b]='X';
											Barco21 [4][1] = a-3;
											Barco21 [4][2] = b;
											printf("\n \t 5ta:_%i,%i \n", a-4, b);
											matriz2 [a-4][b]='X';
											Barco21 [5][1] = a-4;
											Barco21 [5][2] = b;
											cor1=2;
											getch ();
										}
												if (c=a+1 && b==d && a<=6)
												{
													printf("\n \t 3ra:_%i,%i \n", a+2, b);
													matriz2 [a+2][b]='X';
													Barco21 [3][1] = a+2;
													Barco21 [3][2] = b;
													printf("\n \t 4ta:_%i,%i \n", a+3, b);
													matriz2 [a+3][b]='X';
													Barco21 [3][1] = a+3;
													Barco21 [3][2] = b;
													printf("\n \t 5ta:_%i,%i \n", a+4, b);
													matriz2 [a+4][b]='X';
													Barco21 [3][1] = a+4;
													Barco21 [3][2] = b;
													cor1=2;
													getch ();
												}
												if(cor1!=2) 
												{
														cor1=6;
												}
												printf ("\n \t %i ", cor);
											
										
											
								break;

								case 2:
											// fin de pedir coordenadas de primer barco 
											system ("cls");
											printf ("\n \t Coordenadas del segundo barco (4):");// pedir coordenadas del segundo barco
											printf ("\n \t 1ra:_");
											scanf ("%i,%i", &e, &f);
											Barco22 [1][1] = e;
											Barco22 [1][2] = f;
											matriz2 [e][f]='X';
											printf ("\n \t 2da:_");
											scanf ("%i,%i", &g, &h);
											Barco22 [2][1] = g;
											Barco22 [2][2] = h;
											matriz2 [g][h]='X';
											if (h==f-1 && e==g && f>=4)
											{
												printf("\n \t 3ra:_%i,%i \n", e, f-2);
												matriz2 [e][f-2]='X';
												Barco22 [3][1] = e;
												Barco22 [3][2] = f-2;
												printf("\n \t 4ta:_%i,%i \n", e, f-3);
												matriz2 [e][f-3]='X';
												Barco22 [4][1] = e;
												Barco22 [4][2] = f-3;
												cor1=3;
												getch ();
											}
											if(h==f+1 && e==g && f<=7)
												{
													printf("\n \t 3ra:_%i,%i \n", e, f+2);
													matriz2 [e][f+2]='X';
													Barco22 [3][1] = e;
													Barco22 [3][2] = f+2;
													printf("\n \t 4ta:_%i,%i \n", e, f+3);
													matriz2 [e][f+3]='X';
													Barco22 [4][1] = e;
													Barco22 [4][2] = f+3;
													cor1=3;
													getch ();
												}
												if (g==e-1 && f==h && e>=4)
												{
													printf("\n \t 3ra:_%i,%i \n", e-2, f);
													matriz2 [e-2][f]='X';
													Barco22 [3][1] = e-2;
													Barco22 [3][2] = f;
													printf("\n \t 4ta:_%i,%i \n", e-3, f);
													matriz2 [e-3][f]='X';
													Barco22 [4][1] = e-3;
													Barco22 [4][2] = f;
													cor1=3;
													getch ();
												}
														if (g=e+1 && f==h && e<=7)
														{
															printf("\n \t 3ra:_%i,%i \n", e+2, f);
															matriz2 [e+2][f]='X';
															Barco22 [3][1] = e+2;
															Barco22 [3][2] = f;
															printf("\n \t 4ta:_%i,%i \n", e+3, f);
															matriz2 [e+3][f]='X';
															Barco22 [4][1] = e+3;
															Barco22 [4][2] = f;
															cor1=3;
															getch ();
														}
													if(cor1!=3) 
												{
														cor1=6;
												}
												printf ("\n \t %i ", cor);
													
								break;				
											
								case 3:// coordenadas del barco 3 		
										system ("cls");
										printf (" \t Coordenadas del tercer barco (3): ");
										printf ("\n \t 1ra:_");
										scanf ("%i,%i", &i, &j);
										matriz2 [i][j]='X';
										Barco23 [1][1] = i;
										Barco23 [1][2] = j;
										printf ("\n \t 2da:_");
										scanf ("%i,%i", &k, &l);
										matriz2 [k][l]='X';
										Barco23 [2][1] = k;
										Barco23 [2][2] = l;
										if (l==j-1 && i==k && j>=3)
										{
											printf("\n \t 3ra:_%i,%i \n", i, j-2);
											matriz2 [i][j-2]='X';
											Barco23 [3][1] = i;
											Barco23 [3][2] = j-2;
											cor1=4;
											getch ();
										}
										if(l==j+1 && i==k && j<=8)
											{
												printf("\n \t 3ra:_%i,%i \n", i, j+2);
												matriz2 [i][j+2]='X';
												Barco23 [3][1] = i;
												Barco23 [3][2] = j+2;
												cor1=4;
												getch ();
											}
											
											if (k==i-1 && j==l && i>=3)
											{
												printf("\n \t 3ra:_%i,%i \n", i-2, j);
												matriz2 [i-2][j]='X';
												Barco23 [3][1] = i-2;
												Barco23 [3][2] = j;
												cor1=4;
												getch ();
											}
											
													if (k=i+1 && j==l && i<=8)
													{
														printf("\n \t 3ra:_%i,%i \n", i+2, j);
														matriz2 [i+2][j]='X';
														Barco23 [3][1] = i+2;
														Barco23 [3][2] = j;
														cor1=4;
														getch ();
													}
												if(cor1!=4) 
												{
														cor1=6;
												}
												printf ("\n \t %i ", cor);
							break;

							case 4:
											
										// fin de las coordenadas 4to barco
										system ("cls");
										printf("\t Coordenadasdel cuarto barco (3):");
										printf ("\n \t 1ra:_");
										scanf ("%i,%i", &m, &n);
										matriz2 [m][n]='X';
										Barco24 [1][1] = m;
										Barco24 [1][2] = n;
										printf ("\n \t 2da:_");
										scanf ("%i,%i", &o, &p);
										matriz2 [o][p]='X';
										Barco24 [2][1] = o;
										Barco24 [2][2] = p;
										if (p==n-1 && m==o && n>=3)
										{
											printf("\n \t 3ra:_%i,%i \n", m, n-2);
											matriz2 [m][n-2]='X';
											Barco24 [3][1] = m;
											Barco24 [3][2] = n-2;
											cor1=5;
											getch ();
										}
										
										if(p==n+1 && m==o && n<=8)
											{
												printf("\n \t 3ra:_%i,%i \n", m, n+2);
												matriz2 [m][n+2]='X';
												Barco24 [3][1] = m;
												Barco24 [3][2] = n+2;
												cor1=5;
												getch ();
											}
											
											if (o==m-1 && n==p && m>=3)
											{
												printf("\n \t 3ra:_%i,%i \n", m-2, n);
												matriz2 [m-2][n]='X';
												Barco24 [3][1] = m-2;
												Barco24 [3][2] = n;
												cor1=5;
												getch ();
											}
											
													if (o=m+1 && n==p && m<=8)
													{
														printf("\n \t 3ra:_%i,%i \n", m+2, n);
														matriz2 [m+2][n]='X';
														Barco24 [3][1] = m+2;
														Barco24 [3][2] = n;
														cor1=5;
														getch ();
													}
												if(cor1!=5) 
												{
														cor1=6;
												}
												printf ("\n \t %i ", cor);
							break;					
											
							case 5:
									// fin de las coordenadas del cuarto barco
										system ("cls");
										 printf(" \t Coordenadas del quinto barco (2): ");
										 printf ("\n \t 1ra:_");
										scanf ("%i,%i", &q, &r);
										printf ("\n \t 2da:_");
										scanf ("%i,%i", &s, &t);
											matriz2 [q][r]='X';
											matriz2 [s][t]='X';
											Barco25 [1][1] = q;
											Barco25 [1][2] = r;
											Barco25 [2][1] = s;
											Barco25 [2][2] = t;
											cor1=8;
											getch ();
							break;
							
							case 6:
								system ("cls");
								system ("Color 04");
								printf ("\a \n \t Tu barco no puede estar en pedazos dejale eso al rival y por equivocarte vas de nuevo al principio \n \t presiona enter");
								getch ();
								cor1=1;
							break;
						}
				}
				while(cor1<7);
		
			getch ();// fin de las coordenadas del jugador 2
			system ("cls");
			printf ("\n \t Tu tablero ser%c: ", aa);// Tablero con barcos 
			printf("\n \n ");
				for(i=0;i<11;i++)
				{
					for(j=0;j<11;j++)
					{
						printf("\t %c ",matriz2 [i][j]);
					}
					printf ("\n");
				}
				getch ();
				
				int win=-1, pos, Pos111=0, Pos112=0, Pos113=0, Pos114=0, Pos115=0, Pos121=0, Pos122=0, Pos123=0, Pos124=0, Pos131=0, Pos132=0, Pos133=0, Pos141=0, Pos142=0, Pos143=0, Pos151=0, Pos152=0, Pos211=0, Pos212=0, Pos213=0, Pos214=0, Pos215=0, Pos221=0, Pos222=0, Pos223=0, Pos224=0, Pos231=0, Pos232=0, Pos233=0, Pos241=0, Pos242=0, Pos243=0, Pos251=0, Pos252=0;
				int hundido11=0, hundido12=0, hundido13=0, hundido14=0, hundido15=0, hundido21=0, hundido22=0, hundido23=0, hundido24=0, hundido25=0;
				do // inicio de algoritmo de turnos 
				{
						system ("cls");
						system ("color 0A"); // color verde claro 
						if (Pos211==1 && Pos212==1 && Pos213==1 && Pos214 ==1 && Pos215==1 && Pos221==1 && Pos222==1 && Pos223==1 && Pos224 ==1 && Pos231==1 && Pos232==1 && Pos233==1  && Pos241==1 && Pos242==1 && Pos243==1  && Pos251==1 && Pos252==1 )
						{
									win=2;
									Bool=0;
						}
						else 
						{
								printf("\n \t \n \t \n \t Turno del jugador 1 \n Presione enter para continuar \n");
								getch ();
								for(i=0;i<11;i++)
								{
									for(j=0;j<11;j++)
									{
										printf("\t %c ",matriz3 [i][j]);//tablero con marcas 
									}
									printf ("\n");
								}
								printf ("\n \n ");
								for(i=0;i<11;i++)
								{
									for(j=0;j<11;j++)
									{
										printf("\t %c ",matriz1 [i][j]);//tablero propio 
									}
									printf ("\n");
								}
								barco=0;
								Bool=1;
						
								do // Revisión de concordancia de cordenadas con barcos
								{
									
									switch (barco)
									{
										case 0://inicio
												printf ("\n \t Introduzca las coordenadas en donde desea disparar_");
												scanf ("%i,%i", &u, &v);
												matriz3 [u][v]='X';
												
												barco=1;
												
										break;
										case 1: //Barco 1
												if(hundido21==1)
												{
														printf ("\n \t Barco1---Hundido---");
														barco=2;
												}
												else
												{
														for (i=1;i<=5;)
														{
															j=1;
															if (u==Barco21 [i][j])
															{
																j++;
																if (v==Barco21 [i][j])
																{
																	pos=i;
																	switch (pos)
																	{
																		case 1: 
																				Pos211 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;
																		
																		case 2:
																				Pos212 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;
																		
																		case 3: 
																				Pos213 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;
																		case 4: 
																				Pos214 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;
																		case 5: 
																				Pos215 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;
																	}
																}
																else 
																{
																	i++;
																}
															}
															else 
																{
																	i++;
																}
															
														}
														if (i==7)
														{
																barco =6;
														}
														else 
														{
																barco=2;
														}
												}
												
										break;
												
										case 2: //Barco 2
												if(hundido22==1)
												{
													printf ("\n Barco2 ---Hundido---");
													barco=3;
												}
												else
												{
														for (i=1;i<=4;)
														{
															j=1;
															if (u==Barco22 [i][j])
															{
																j++;
																if (v==Barco22 [i][j])
																{
																	pos=i;
																	switch (pos)
																	{
																		case 1: 
																				Pos221 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;
																		
																		case 2:
																				Pos222 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;
																		
																		case 3: 
																				Pos223 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;
																		case 4: 
																				Pos224 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;

																	}
																}
																else 
																{
																	i++;
																}
															}
															else 
																{
																	i++;
																}
															
														}
														if (i==7)
														{
																barco =6;
														}
														else 
														{
																barco=3;
														}
												}
												
										break; 
										
										case 3: //Barco 3
												if (hundido23==1)
												{
													printf ("\n Barco3 ---Hundido---");
													barco=4;
												}
												else
												{
														for (i=1;i<=3;)
														{
															j=1;
															if (u==Barco23 [i][j])
															{
																j++;
																if (v==Barco23 [i][j])
																{
																	pos=i;
																	switch (pos)
																	{
																		case 1: 
																				Pos231 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;
																		
																		case 2:
																				Pos232 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;
																		
																		case 3:
																				Pos233 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;


																	}
																}
																else 
																{
																	i++;
																}
															}
															else 
																{
																	i++;
																}
															
														}
													
														if (i==7)
														{
																barco =6;
														}
														else 
														{
																barco=4;
														}
												}
												
										break;
										
										case 4: // Barco 4
												if (hundido24==1)
												{
													printf ("\n Barco4 ---Hundido---");
													barco =5;
												}
												else
												{
														for (i=1;i<=3;)
														{
															j=1;
															if (u==Barco24 [i][j])
															{
																j++;
																if (v==Barco24 [i][j])
																{
																	pos=i;
																	switch (pos)
																	{
																		case 1: 
																				Pos241 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;
																		
																		case 2:
																				Pos242 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;
																		
																		case 3: 
																				Pos243 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;


																	}
																}
																else 
																{
																	i++;
																}
															}
															else 
																{
																	i++;
																}
															
														}
														if (i==7)
														{
																barco =6;
														}
														else 
														{
																barco=5;
														}
												}
												
										break;
										
										case 5:
												if (hundido25==1)
												{
													printf ("\n Barco5 ---Hundido---");
													barco=7;
												}
												else 
												{
														for (i=1;i<=2;)
														{
															j=1;
															if (u==Barco25 [i][j])
															{
																j++;
																if (v==Barco25 [i][j])
																{
																	pos=i;
																	switch (pos)
																	{
																		case 1: 
																				Pos251 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;
																		
																		case 2:
																				Pos252 =1;
																				printf ("\n \t Has acertado");
																				matriz3 [u][v]=lv;
																				barco=6;
																				i=7;
																		break;
																		


																	}
																}
																else 
																{
																	i++;
																}
															}
															else 
																{
																	i++;
																}
															
														}
														if (i==7)
														{
																barco =6;
														}
														else 
														{
																barco=7;
														}
												}
												
										break;
										case 6: // En caso de acertar 
												
												if (Pos211==1 && Pos212==1 && Pos213==1 && Pos214 ==1 && Pos215==1 )
												{		
														hundido21=1;
												}
												
												if (Pos221==1 && Pos222==1 && Pos223==1 && Pos224 ==1)
												{
														hundido22=1;
												}
												
												if (Pos231==1 && Pos232==1 && Pos233==1)
												{
														hundido23 =1;	
												}											
												
												if (Pos241==1 && Pos242==1 && Pos243==1)
												{
														hundido24=1;
												}
												
												if (Pos251==1 && Pos252==1)
												{
														hundido25=1;
												}
												
												if (Pos211==1 && Pos212==1 && Pos213==1 && Pos214 ==1 && Pos215==1 && Pos221==1 && Pos222==1 && Pos223==1 && Pos224 ==1 && Pos231==1 && Pos232==1 && Pos233==1  && Pos241==1 && Pos242==1 && Pos243==1  && Pos251==1 && Pos252==1 )
												{
													win=1;
													Bool=0;
												}
												
												else 
												{
														printf ("\n \t Te toca de nuevo");	
														getch();
														system ("cls");
														printf("\n \t \n \t \n \t Turno del jugador 1 \n Presione enter para continuar \n");
														for(i=0;i<11;i++)
														{
															for(j=0;j<11;j++)
															{
																printf("\t %c ",matriz3 [i][j]);
															}
															printf ("\n");
														}
														printf ("\n \n ");
														for(i=0;i<11;i++)
														{
															for(j=0;j<11;j++)
															{
																printf("\t %c ",matriz1 [i][j]);
															}
															printf ("\n");
																
														}
														Bool =1;
														barco=0;
														
												}
									break;
									case 7:
												printf ("\n \t Has fallado, mejor suerte a la proxima ");
												barco=8;
												
									break;
									
									case 8: 
									
											Bool=0;
									break;
									}
										
								}	
								while (Bool>0);
						}
						printf ("\n \t Presione enter para continuar ");
						getch ();
						system ("cls");
						system("Color 0B");
						printf("\n \t \n \t \n \t Turno del jugador 2 \n Presione enter para continuar \n");
													getch ();
													for(i=0;i<11;i++)
													{
														for(j=0;j<11;j++)
														{
															printf("\t %c ",matriz4 [i][j]);
														}
														printf ("\n");
													}
													printf ("\n \n ");
													for(i=0;i<11;i++)
													{
														for(j=0;j<11;j++)
														{
															printf("\t %c ",matriz2 [i][j]);
														}
														printf ("\n");
															
													}
													
						if (Pos211==1 && Pos212==1 && Pos213==1 && Pos214 ==1 && Pos215==1 && Pos221==1 && Pos222==1 && Pos223==1 && Pos224 ==1 && Pos231==1 && Pos232==1 && Pos233==1  && Pos241==1 && Pos242==1 && Pos243==1  && Pos251==1 && Pos252==1 )
						{
									win=1;
									Bool=0;
						}
						else 
						{
							
							barco2=0;
							Bool =1; 
						
							do
							{
								switch (barco2)
								{
										case 0://inicio
										system ("cls");
						system("Color 0B");
						printf("\n \t \n \t \n \t Turno del jugador 2 \n Presione enter para continuar \n");
													getch ();
													for(i=0;i<11;i++)
													{
														for(j=0;j<11;j++)
														{
															printf("\t %c ",matriz4 [i][j]);
														}
														printf ("\n");
													}
													printf ("\n \n ");
													for(i=0;i<11;i++)
													{
														for(j=0;j<11;j++)
														{
															printf("\t %c ",matriz2 [i][j]);
														}
														printf ("\n");
															
													}
												printf ("\n \t Introduzca las coordenadas en donde desea disparar_");
												scanf ("%i,%i", &x, &y);
												matriz4 [x][y]='X';
												barco2=1;
										break;
										
										
										case 1: //Barco 1
												if (Pos111==1 && Pos112==1 && Pos113==1 && Pos114 ==1 && Pos115==1)
												{
														printf ("\n Barco1---Hundido---");
														barco2=2;
												}
												else
												{
												
														for (i=1;i<=5;)
														{
															j=1;
															if (x==Barco11 [i][j])
															{
																j++;
																if (y==Barco11 [i][j])
																{
																	pos=i;
																	switch (pos)
																	{
																		case 1: 
																				Pos111 =1;
																				printf ("\n \t Has acertado");
																				matriz4 [x][y]=lv;
																				barco2=6;
																				i=7;
																		break;
																		
																		case 2:
																				Pos112 =1;
																				printf ("\n \t Has acertado");
																				matriz4 [x][y]=lv;
																				barco2=6;
																				i=7;
																		break;
																		
																		case 3: 
																				Pos113 =1;
																				printf ("\n \t Has acertado");
																				matriz4 [x][y]=lv;
																				barco2=6;
																				i=7;
																		break;
																		case 4:
						 
																				Pos114 =1;
																				printf ("\n \t Has acertado");
																				matriz4 [x][y]=lv;
																				barco2=6;
																				i=7;
																		break;
																		case 5: 
																				Pos115 =1;
																				printf ("\n \t Has acertado");
																				matriz4 [x][y]=lv;
																				barco2=6;
																				i=7;
																		break;
																	}
																}
																else 
																{
																	i++;
																}
															}
															else 
																{
																	i++;
																}
															
														}
														if (i==7)
														{
																barco2 =6;
														}
														else 
														{
																barco2=2;
														}
												}
										break;
										
										case 2: //Barco 2
												if(Pos121==1 && Pos122==1 && Pos123==1 && Pos124 ==1 )
												{
														printf ("\nBarco2 ---Hundido---");
														barco2=3;
												}
												else
												{
														for (i=1;i<=4;)
														{
															j=1;
															if (x==Barco12 [i][j])
															{
																j++;
																if (y==Barco12 [i][j])
																{
																	pos=i;
																	switch (pos)
																	{
																		case 1: 
																				Pos121 =1;
																				printf ("\n \t Has acertado");
																				matriz4 [x][y]=lv;
																				barco2=6;
																				i=7;
																		break;
																		
																		case 2:
																				Pos122 =1;
																				printf ("\n \t Has acertado");
																				matriz4 [x][y]=lv;
																				barco2=6;
																				i=7;
																		break;
																		
																		case 3: 
																				Pos123 =1;
																				printf ("\n \t Has acertado");
																				matriz4 [x][y]=lv;
																				barco2=6;
																				i=7;
																		break;
																		case 4: 
																				Pos124 =1;
																				printf ("\n \t Has acertado");
																				matriz4 [x][y]=lv;
																				barco2=6;
																				i=7;
																		break;

																	}
																}
																else 
																{
																	i++;
																}
															}
															else 
																{
																	i++;
																}
															
														}
														if (i==7)
														{
																barco2 =6;
														}
														else 
														{
																barco2=3;
														}
												}
										break; 
										
										case 3: //Barco 3
												if(Pos131==1 && Pos132==1 && Pos133==1)
												{
													printf ("\nBarco3 ---Hundido---");
													barco2=4;
												}
												
												else 
												{
																for (i=1;i<=3;)
																{
																	j=1;
																	if (x==Barco13 [i][j])
																	{
																		j++;
																		if (y==Barco13 [i][j])
																		{
																			pos=i;
																			switch (pos)
																			{
																				case 1: 
																						Pos131 =1;
																						printf ("\n \t Has acertado");
																						matriz4 [x][y]=lv;
																						barco2=6;
																						i=7;
																				break;
																				
																				case 2:
																						Pos132 =1;
																						printf ("\n \t Has acertado");
																						matriz4 [x][y]=lv;
																						barco2=6;
																						i=7;
																				break;
																				
																				case 3: 
																						Pos133 =1;
																						printf ("\n \t Has acertado");
																						matriz4 [x][y]=lv;
																						barco2=6;
																						i=7;
																				break;


																			}
																		}
																		else 
																		{
																			i++;
																		}
																	}
																	else 
																		{
																			i++;
																		}
																	
																}
															
																if (i==7)
																{
																		barco2 =6;
																}
																else 
																{
																		barco2=4;
																}
												}
										break;
										
										case 4: // Barco 4
												if (Pos141==1 && Pos142==1 && Pos143==1)
												{
													printf ("\nBarco4---Hundido---");
													barco2=5;
												}
												else 
												{
														for (i=1;i<=3;)
														{
															j=1;
															if (x==Barco14 [i][j])
															{
																j++;
																if (y==Barco14 [i][j])
																{
																	pos=i;
																	switch (pos)
																	{
																		case 1: 
																				Pos141 =1;
																				printf ("\n \t Has acertado");
																				matriz4 [x][y]=lv;
																				barco2=6;
																				i=7;
																		break;
																		
																		case 2:
																				Pos142 =1;
																				printf ("\n \t Has acertado");
																				matriz4 [x][y]=lv;
																				barco2=6;
																				i=7;
																		break;
																		
																		case 3: 
																				Pos143 =1;
																				printf ("\n \t Has acertado");
																				matriz4 [x][y]=lv;
																				barco2=6;
																				i=7;
																		break;


																	}
																}
																else 
																{
																	i++;
																}
															}
															else 
																{
																	i++;
																}
															
														}
														if (i==7)
														{
																barco2 =6;
														}
														else 
														{
																barco2=5;
														}
												}
										break;
										
										case 5:
												if (Pos151==1 && Pos152==1)
												{
													printf ("\nBarco5---Hundido---");
													barco2=7;
												}
												else 
												{
														for (i=1;i<=2;)
														{
															j=1;
															if (x==Barco15 [i][j])
															{
																j++;
																if (y==Barco15 [i][j])
																{
																	pos=i;
																	switch (pos)
																	{
																		case 1: 
																				Pos151 =1;
																				printf ("\n \t Has acertado");
																				matriz4 [x][y]=lv;
																				barco2=6;
																				i=7;
																		break;
																		
																		case 2:
																				Pos152 =1;
																				printf ("\n \t Has acertado");
																				matriz4 [x][y]=lv;
																				barco2=6;
																				i=7;
																		break;
																		


																	}
																}
																else 
																{
																	i++;
																}
															}
															else 
																{
																	i++;
																}
															
														}
														if (i==7)
														{
																barco2 =6;
														}
														else 
														{
																barco2=7;
														}
												}
										break;
										case 6: // En caso de acertar 
												if (Pos111==1 && Pos112==1 && Pos113==1 && Pos114 ==1 && Pos115==1 )
												{		
														hundido11=1;
												}
												if (Pos121==1 && Pos122==1 && Pos123==1 && Pos124 ==1)
												{
														hundido12=1;
												}
												if (Pos131==1 && Pos132==1 && Pos133==1)
												{
														hundido13 =1;	
												}
												if (Pos141==1 && Pos142==1 && Pos143==1)
												{
														hundido14=1;
												}
												if (Pos151==1 && Pos152==1)
												{
														hundido15=1;
												}
												if (Pos111==1 && Pos112==1 && Pos113==1 && Pos114 ==1 && Pos115==1 && Pos121==1 && Pos122==1 && Pos123==1 && Pos124 ==1 && Pos131==1 && Pos132==1 && Pos133==1  && Pos141==1 && Pos142==1 && Pos143==1  && Pos151==1 && Pos152==1 )
												{
														win=2;
														Bool=0;
												}
												else 
												{
													printf ("\n \t Te toca de nuevo");	
													getch ();
													system ("cls");
													Bool =1;
													barco2=0;
													
												}
										break;
										
										case 7:// en caso de fallar 
													printf ("\n \t Has fallado o ya has hundido dicho barco, mejor suerte a la proxima ");
													getch ();
													barco2 =8;
													
										break;
										
										case 8: 
											Bool = 0;
											printf ("%i", Bool);
										break; 	
								}
							}
							while (Bool>0);
						}
							
						
				}
				while (win<1);
				system("color 0F");
				system("cls");
				printf ("\n \n \n \n \n \t \t \t Felicidades jugador %i has ganado", win);
				getch ();
			case 3:// mensaje de salida  
			system ("cls");
			printf ("\n \t Gracias por jugar vuelva pronto :3");
			printf ("\n \t .............creditos...............");
			printf ("\n \n \t Dise%co..........................Fr%cas", an, ai);
			printf ("\n \n \t Programaci%cn y c%cdigo..........Fr%cas", ao, ao, ai);
			printf ("\n \n \t Todo lo dem%cs......yo mismo otra vez", aa);
			getch();
			system ("cls");
			break; 
		}
	}
	while (OP!=3);
	return 0; 
}
