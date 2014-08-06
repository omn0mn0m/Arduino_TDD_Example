
enum Language {
  ENGLISH
};

class Localization { 
  public: 

    char * GetGreeting(Language language) {
      if (language == ENGLISH)
        return (char *)"Hello world!";
      else
        return '\0';
    }
};