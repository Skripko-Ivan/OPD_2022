#ifndef IVAN_S_H
#define IVAN_S_H

#define _CRT_SECURE_NO_WARNINGS
#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <sstream>

using namespace std;
using namespace sf;

int menu(RenderWindow& window, int is_user, string user);
int registration(RenderWindow& window);
string authorization(RenderWindow& window);
void add_to_load(string login);
void add_to_give_rating(string login);
void add_to_post_comment(string login);
#endif