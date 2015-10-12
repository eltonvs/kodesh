Pessoa gera_filho(Pessoa p1, Pessoa p2) {
    Pessoa filho;
    filho.altura = (p1.altura + p2.altura)/2;
    filho.peso = (p1.peso + p2.peso)/2;
    filho.peh = (p1.peh + p2.peh)/2;
    //cabelo
    filho.cabelo.red = (p1.cabelo.red + p2.cabelo.red)/2;
    filho.cabelo.green = (p1.cabelo.green + p2.cabelo.green)/2;
    filho.cabelo.blue = (p1.cabelo.blue + p2.cabelo.blue)/2;
    filho.cabelo.alpha = (p1.cabelo.alpha + p2.cabelo.alpha)/2;
    //olhos
    filho.olhos.red = (p1.olhos.red + p2.olhos.red)/2;
    filho.olhos.green = (p1.olhos.green + p2.olhos.green)/2;
    filho.olhos.blue = (p1.olhos.blue + p2.olhos.blue)/2;
    filho.olhos.alpha = (p1.olhos.alpha + p2.olhos.alpha)/2;
    //pele
    filho.pele.red = (p1.pele.red + p2.pele.red)/2;
    filho.pele.green = (p1.pele.green + p2.pele.green)/2;
    filho.pele.blue = (p1.pele.blue + p2.pele.blue)/2;
    filho.pele.alpha = (p1.pele.alpha + p2.pele.alpha)/2;
    return filho;
}
