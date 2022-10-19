// vector<int> levelorderprint(node *root, int k)
// {
//     vector<int> v1;
//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);
//     int count=1;

//     while (!q.empty())
//     {
//         node *temp = q.front();
//         if (temp == NULL)
//         {
//             count++;
//            // cout << endl;
//             q.pop();
//             // insert a new null for the next level
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             q.pop();
//             if(count==k){
//                 int i=0;
//                 v1[i] = temp->data
//             }

//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//         }
//     }
//     return v1;
// }
