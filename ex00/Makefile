# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/06 11:14:25 by jcheron           #+#    #+#              #
#    Updated: 2024/12/06 11:21:10 by jcheron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

all: megaphone

megaphone: megaphone.cpp
	$(CXX) $(CXXFLAGS) -o megaphone megaphone.cpp

clean:
	rm -f megaphone
