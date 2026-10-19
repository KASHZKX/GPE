#include <bits/stdc++.h>
using namespace std;

struct Directory {
    map<string, Directory> child_dir;
};

void DFS_print(Directory& my_directory, int level){
    for(auto &it:my_directory.child_dir){
        for(int i = 0; i < level; i++){
            cout << " ";
        }
        cout << it.first << endl;
        DFS_print(it.second, level+1);
    }
}

int main(){
    int dir_paths_num;
    Directory my_directory;
    cin >> dir_paths_num;
    while( dir_paths_num-- > 0){
        string cur_path;
        cin >> cur_path;

        string temp;
        stringstream ss(cur_path);

        Directory* cur_dir = &my_directory;
        while( getline(ss, temp, '\\') ){
            cur_dir = &cur_dir->child_dir[temp];
        }
    }
    DFS_print(my_directory, 0);
}
