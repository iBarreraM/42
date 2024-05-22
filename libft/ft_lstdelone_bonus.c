void ft_lstdelone(t_list *lst, void (*del)(void *))
{
 if (!lst || !del)
 return ;
 if (lst && del)
 {
 del (lst->content);
 free(lst);
 }
}