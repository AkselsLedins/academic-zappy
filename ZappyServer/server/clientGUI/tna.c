/*
** tna.c for  in /home/thebau-j/rendu/blowshitup/ServerZappy/server/clientGUI
**
** Made by
** Login   <thebau_j@epitech.net>
**
** Started on  Sun Jul 13 15:54:56 2014
** Last update dim. juil. 13 16:37:12 2014 julien thebaud
*/

#include	"zappy.h"

int	tna(t_zappy *server, t_clientGUI *client, char *cmd)
{
  char		*send;

  (void)cmd;
  send = tograph_tna(server);
  if (send)
    {
      copy_in_buff(send, client->buff_write);
      free(send);
      client->write = true;
    }
  return (0);
}
