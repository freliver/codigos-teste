/*
 * 10300.c
 * 
 * Copyright 2015  <brainiac@brainiac>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	
	int n;
	int f;
	int tFazenda;
	int nAnimais;
	int beneficiosAmbiente;
	int i = 0;
	int j = 0;
	float metrosPorAnimal;
	float premioAnimal = 0;
	float premioFinal = 0;
 	
	
	do{
			scanf("%d", &n);
				
	}while(n < 0 || n > 20);
	
	do{
			scanf("%d", &f);
				
	}while(n < 0 || n > 20);
	
	for(i = 0; i < n; ++i){
		for(j = 0; j < f; ++j){
			scanf("%d", &tFazenda);
			scanf("%d", &nAnimais);
			scanf("%d", &beneficiosAmbiente);
		
		metrosPorAnimal = tFazenda/nAnimais;
		premioAnimal = pow(metrosPorAnimal, 2)*beneficiosAmbiente;
		premioFinal += premioAnimal*nAnimais;
		}
		printf("%f", premioFinal);
	}
	
	
	
	return 0;
}
