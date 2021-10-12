import java.io.*;
import java.util.Scanner;
public class Solution {
public static int N,M;
public static int [][] graph = new int
[1000][1000];
public static void main(String[] args){
Scanner scanner = new Scanner(System.in);
// N, M 입력
N = scanner.nextInt();
M = scanner.nextInt();
scanner.nextLine(); //버퍼 지우
System.out.println("+++++++");
System.out.println("n " + N + "m" + M);
// 2차원 리스트의 맵 정보 입력 받기
for(int i=0; i <N; i++){
String str = scanner.nextLine();
for(int j=0; j<M; j++){
graph[i][j] = str.charAt(j) - '0';
}
}
scanner.close();
//현재 노드(위치)에 대하여 음료수 채우기
int result = 0;
// 2차원 리스트의 맵 정보 입력 받기
for(int i=0; i <N; i++){
for(int j=0; j<M; j++){
//현재 위치에서 DFS 수행
if(dfs(i, j)){
result+=1;
}
}
}
System.out.println(result);
// DFS로 특정 노드를 방문하고 상하좌우로 연결된 모든 노드들도 방문
public static boolean dfs(int x, int y){
// 주어진 범위를 벗어나는 경우에는 종료
if(x <= -1 || x>= N || y <= -1 || y >= M)
return false;
//현재 노드를 아직 방문하지 않았다면
if(graph[x][y] == 0){
//해당 노드 방문 처리
graph[x][y] = 1;
dfs(x -1, y);
dfs(x, y -1);
dfs(x + 1, y );
dfs(x, y + 1);
return true;
}
return false;
}
}