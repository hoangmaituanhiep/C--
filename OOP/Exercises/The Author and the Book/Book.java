public class Book{
    String name;
    Author[] authors;
    double price;
    int qty;

    Book(String name, Author[] authors, double price){
        this.name = name;
        this.authors = authors;
        this.price = price;
    }
    Book(String name, Author[] authors, double price, int qty){
        this.name = name;
        this.authors = authors;
        this.price = price;
        this.qty = qty;
    }

    public String getName(){
        return this.name;
    }
    public Author[] getAuthors(){
        return this.authors;
    }
    public double getPrice(){
        return this.price;
    }
    public void setPrice(double price){
        this.price = price;
    }
    public int getQty(){
        return this.qty;
    }
    public void setQty(int qty){
        this.qty = qty;
    }

    public String toString(){
        String s = "Book[name=%s, authors={";
        int n = authors.length;
        boolean first = true;

        for (int i=0; i<n; i++){

            if (!first){
                s += ",";
            }
            s += authors[i].toString();

            first = false;
        }

        s += "},price=%f,qty=%d]";

        return String.format(s, this.name, this.price, this.qty);
    }
    public String getAuthorName(){
        String s = null;
        int n=authors.length;
        boolean first = true;

        for (int i=0; i<n; i++){
            if (!first){
                s += " ";
            }
            s+= authors[i].getName();
            
            first = false;
        }

        return s;
    }
}