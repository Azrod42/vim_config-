Vim�UnDo� e8�Wd��y�6o�Ҙo����6�fgi	3	��      $	if (s1[0] == '\0' || s2[0] == '\0')            A       A   A   A    c">�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             c"9%     �                   5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             c"90     �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             c"90     �                  �               5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             c"9F     �                 char	*ft_strjoin(const char s!)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             c"9G     �                  char	*ft_strjoin(const char *s!)5�_�                       '    ����                                                                                                                                                                                                                                                                                                                                                             c"9X     �                 0char	*ft_strjoin(const char *s1, const char *s2)5�_�                       %    ����                                                                                                                                                                                                                                                                                                                                                             c"9[     �                 *char	*ft_strjoin(const char *s1, char *s2)5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             c"9`     �                 0char	*ft_strjoin(const char *s1, char const *s2)5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             c"9b    �                 *char	*ft_strjoin(char *s1, char const *s2)5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             c"9�     �               	�             �                 	�               5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             c"9�     �               	char *dup;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             c"9�     �               	�             5�_�                          ����                                                                                                                                                                                                                                                                                                                                                             c"9�     �         	      	dup = malloc((ft_strlen(s1)))5�_�                       ,    ����                                                                                                                                                                                                                                                                                                                                                             c"9�     �         	      .	dup = malloc((ft_strlen(s1) + ft_strlen(s2)))5�_�                       1    ����                                                                                                                                                                                                                                                                                                                                                             c"9�     �         	      2	dup = malloc((ft_strlen(s1) + ft_strlen(s2) + 1))5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             c":     �         	      1	dup = malloc((ft_strlen(s1) + ft_strlen(s2) + 1)5�_�                       0    ����                                                                                                                                                                                                                                                                                                                                                             c":    �         	      0	dup = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)5�_�                       0    ����                                                                                                                                                                                                                                                                                                                                                             c":     �      	   
      	�      	   	    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             c":     �      
         		�      
   
    5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                             c":    �      
         		return (NULL)5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                             c":     �   	            	�   	          5�_�                    
   "    ����                                                                                                                                                                                                                                                                                                                                                             c":J     �   	            "	ft_memcpy(dup, s1, ft_strlen(s1))5�_�                    
   "    ����                                                                                                                                                                                                                                                                                                                                                             c":L     �   
          �   
          5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             c":O     �   
            #	ft_memcpy(dup, s1, ft_strlen(s1));5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             c":Q     �   
            #	ft_memcpy(dup, s2, ft_strlen(s1));5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             c":R     �   
            $	ft_memcpy(&dup, s2, ft_strlen(s1));5�_�                       ,    ����                                                                                                                                                                                                                                                                                                                                                             c":\    �   
            0	ft_memcpy(&dup[strlen(s1)], s2, ft_strlen(s1));5�_�                       ,    ����                                                                                                                                                                                                                                                                                                                                                             c":_     �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             c":h     �   
            0	ft_memcpy(&dup[strlen(s1)], s2, ft_strlen(s2));5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             c":k     �               	�             5�_�      !                       ����                                                                                                                                                                                                                                                                                                                                                             c":�     �               #	dup[ft_strlen(s1 + ft_strlen(s2))]5�_�       "           !      "    ����                                                                                                                                                                                                                                                                                                                                                             c":�     �               $	dup[ft_strlen(s1 + ft_strlen(s2 ))]5�_�   !   #           "          ����                                                                                                                                                                                                                                                                                                                                                             c":�     �               $	dup[ft_strlen(s1 + ft_strlen(s2)) ]5�_�   "   $           #      #    ����                                                                                                                                                                                                                                                                                                                                                             c":�     �               %	dup[ft_strlen(s1) + ft_strlen(s2)) ]5�_�   #   %           $      '    ����                                                                                                                                                                                                                                                                                                                                                             c":�     �               (	dup[ft_strlen(s1) + ft_strlen(s2) + 1 ]5�_�   $   &           %      '    ����                                                                                                                                                                                                                                                                                                                                                             c":�     �               '	dup[ft_strlen(s1) + ft_strlen(s2) + 1]5�_�   %   '           &      .    ����                                                                                                                                                                                                                                                                                                                                                             c":�    �               .	dup[ft_strlen(s1) + ft_strlen(s2) + 1] = '\0'5�_�   &   (           '      .    ����                                                                                                                                                                                                                                                                                                                                                             c":�     �               	�             5�_�   '   )           (          ����                                                                                                                                                                                                                                                                                                                                                             c":�     �               	return (dup)5�_�   (   *           )           ����                                                                                                                                                                                                                                                                                                                                                             c":�     �                 5�_�   )   +           *           ����                                                                                                                                                                                                                                                                                                                                                             c":�    �                 5�_�   *   ,           +          ����                                                                                                                                                                                                                                                                                                                                                             c";L     �   
            3	ft_memcpy(&dup[ft_strlen(s1)], s2, ft_strlen(s2));5�_�   +   -           ,          ����                                                                                                                                                                                                                                                                                                                                                             c";M    �   
            6	ft_memcpy(&dup[ft_strlen(s1) +1], s2, ft_strlen(s2));5�_�   ,   .           -           ����                                                                                                                                                                                                                                                                                                                                                             c";T     �   
            7	ft_memcpy(&dup[ft_strlen(s1) + 1], s2, ft_strlen(s2));5�_�   -   /           .          ����                                                                                                                                                                                                                                                                                                                                                             c";V   	 �   
            5	ft_memcpy(&dup[ft_strlen(s1) 1], s2, ft_strlen(s2));5�_�   .   0           /           ����                                                                                                                                                                                                                                                                                                                                                             c";_     �               	�             5�_�   /   1           0          ����                                                                                                                                                                                                                                                                                                                                                             c";f     �               	if (s1 == '\0')5�_�   0   2           1          ����                                                                                                                                                                                                                                                                                                                                                             c";�     �               	if (s1 == '\0' || s2 )5�_�   1   3           2          ����                                                                                                                                                                                                                                                                                                                                                             c";�     �               	if (s1 == '\0' && s2 )5�_�   2   4           3          ����                                                                                                                                                                                                                                                                                                                                                             c";�     �               	if (s1 == '\0' || s2 )5�_�   3   5           4          ����                                                                                                                                                                                                                                                                                                                                                             c";�   
 �               	if (s1 == '\0' || s2 == '\0' )5�_�   4   6           5          ����                                                                                                                                                                                                                                                                                                                                                             c";�     �      	         		�      	       5�_�   5   7           6          ����                                                                                                                                                                                                                                                                                                                                                             c";�     �      	         		return (NULL)5�_�   6   8           7          ����                                                                                                                                                                                                                                                                                                                                                             c";�    �      	         		return (NULL)''5�_�   7   9           8          ����                                                                                                                                                                                                                                                                                                                                                             c"=�     �      	       �             5�_�   8   :           9          ����                                                                                                                                                                                                                                                                                                                                                             c"=�     �      	         		�      	       5�_�   9   ;           :          ����                                                                                                                                                                                                                                                                                                                                                             c"=�     �      	         		return (NULL)5�_�   :   <           ;          ����                                                                                                                                                                                                                                                                                                                                                             c"=�     �               	if (s1 == '\0' || s2 == '\0')5�_�   ;   =           <          ����                                                                                                                                                                                                                                                                                                                                                             c"=�    �               !	if (s1 == '\0' || s2[0] == '\0')5�_�   <   >           =   	       ����                                                                                                                                                                                                                                                                                                                                                             c"=�     �      	          *	char 	d[100] = "bonjour 42 ici c'est 42";5�_�   =   @           >   	       ����                                                                                                                                                                                                                                                                                                                                                             c"=�    �      	          		return (NULL);5�_�   >   A   ?       @          ����                                                                                                                                                                                                                                                                                                                                                             c">o    �               $	if (s1[0] == '\0' || s2[0] == '\0')5�_�   @               A          ����                                                                                                                                                                                                                                                                                                                                                             c">�    �               '	if (s1[0] == '\0' || && s2[0] == '\0')5�_�   >           @   ?          ����                                                                                                                                                                                                                                                                                                                                                             c">l    �               "	if (s1[0] == '\0'  s2[0] == '\0')5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             c"9�     �         	      (	dup = malloc((ft_strlen(s1) + ft_strlen5��