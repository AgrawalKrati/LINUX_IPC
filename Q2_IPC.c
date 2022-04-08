#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
//#define KEY 8979


int main()
{
  int qid;
  struct msqid_ds buf;
  qid=msgget(49,IPC_CREAT|0644);  //to create a msg queue.
  printf("qid=%d\n",qid);
  msgctl(qid,IPC_RMID,NULL);   //to destroy message queue.
  
  printf("Here are the details of the queue\n");
  printf("No of msgs in a q \n",buf.msg_qnum);
  printf("No. of bytes in q \n",buf.msg_cbytes);
  printf("Max no. of bytes in q \n",buf.msg_qbytes);

return 0;
}
