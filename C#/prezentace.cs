public class Zvire {
    public int X 
    public int Y
    public int Z

    public Zvire(int x, int y, int z) {
        X = x;
        Y = y;
        Z = z;
    }
}

public class Savec : Zvire {
    public string BarvaSrsti

    public Savec(int x, int y, int z, string barvaSrsti) : base(x, y, z) {
        BarvaSrsti = barvaSrsti;
    }

    public virtual void VydejZvuk() {
        Console.WriteLine("Nějaký zvuk");
    }
}

public class Kocka : Savec {
    public Kocka(int x, int y, int z, string barvaSrsti) : base(x, y, z, barvaSrsti) {
    }

    public override void VydejZvuk() {
        Console.WriteLine("Mňau");
    }
}

public class Pes : Savec {
    public Pes(int x, int y, int z, string barvaSrsti) : base(x, y, z, barvaSrsti) {
    }

    public override void VydejZvuk() {
        Console.WriteLine("Haf");
    }
}

Kocka kocka1 = new Kocka(100,150,30,"Hnědá");


