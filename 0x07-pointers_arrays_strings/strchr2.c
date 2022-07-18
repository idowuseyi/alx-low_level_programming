for (; *s != '\0'; ++s)
  if (*s == c)
	    return (char *) s;

	    return NULL;


	    for (; *s != '\0' && *s != c; ++s)
	       ;

	       return *s == c ? (char *) s : NULL;
