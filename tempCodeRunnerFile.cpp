bool mypair(char opening , char close){
    if(opening=='(' && close==')') return true;
    else if(opening=='{' && close=='}') return true;
    else if(opening=='[' && close==']') return true;
    return false;
}