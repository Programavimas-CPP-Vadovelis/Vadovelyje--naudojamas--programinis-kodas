std::optional<size_t> findSymbol(const char s[], char c, 
std::optional<size_t> index= std::nullopt ) {
	size_t start_index = index.value_or( 0 ); // argumento reikšmė; 
       // jei argumento nėra - 0
	for (size_t i{ start_index-1 }; i<strlen(s); i++) // start_index-1: 
          // pereiname prie C indekso
		if (s[i] == c)
			return i + 1;
	return std::nullopt;
}
