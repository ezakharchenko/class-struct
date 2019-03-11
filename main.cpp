//
//  Created by Mea Culpa on 3/10/19.
//  Copyright © 2019 Mea Culpa. All rights reserved.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Stats{
    string name,position;
    int games_appeared,at_bat,reached_home,safe_hits,second_base,third_base;
    int home_run,rbi,walks,strikeouts,bases_stolen,attempted_steals;
    float avg,obp,slg,ops;
};
struct Team{
    string state;
    string color;
    Stats players[43];
};
Team Yankees;
void Data_load()
{
    ifstream infile;
    infile.open("444.txt");
    for (int i=0;i<44;i++)
    {
        infile>>Yankees.players[i].name>>Yankees.players[i].position>>Yankees.players[i].games_appeared>>
        Yankees.players[i].at_bat>>Yankees.players[i].reached_home>>Yankees.players[i].safe_hits>>
        Yankees.players[i].second_base>>Yankees.players[i].third_base>>Yankees.players[i].home_run>>
        Yankees.players[i].rbi>>Yankees.players[i].walks>>Yankees.players[i].strikeouts>>
        Yankees.players[i].bases_stolen>>Yankees.players[i].attempted_steals>>Yankees.players[i].avg>>
        Yankees.players[i].obp>>Yankees.players[i].slg>>Yankees.players[i].ops;
    }
};
void Data_out()
{
    for (int i=0;i<44;i++)
        {
        cout<<Yankees.players[i].name<<'\t'<<"Postition: "<<Yankees.players[i].position<<'\t'<<"Games Appeared: "<<Yankees.players[i].games_appeared
        <<'\t'<<"At bat: "<<Yankees.players[i].at_bat<<'\t'<<"Reached Home: "<<Yankees.players[i].reached_home<<'\t'
        <<"Hits: "<<Yankees.players[i].safe_hits<<'\t'<<"Reached Second: "<<Yankees.players[i].second_base<<'\t'
        <<"Reached Third: "<<Yankees.players[i].third_base<<'\t'<<"Home runs: "<<Yankees.players[i].home_run<<'\t'<<"rbi: "<<'\t'<<
        Yankees.players[i].rbi<<"Walks: "<<'\t'<<Yankees.players[i].walks<<'\t'<<"Strikeouts: "<<Yankees.players[i].strikeouts<<'\t'<<
        "Bases stolen: "<<Yankees.players[i].bases_stolen<<'\t'<<"Steals attempted: "<<Yankees.players[i].attempted_steals<<'\t'<<"Avg: "<<Yankees.players[i].avg<<'\t'<<"Obp: "<<Yankees.players[i].obp<<'\t'<<"Slg: "<<Yankees.players[i].slg<<'\t'<<"Ops: "<<Yankees.players[i].ops<<endl;
        };
};
int main()
{
    Data_load();
    Data_out();
};
