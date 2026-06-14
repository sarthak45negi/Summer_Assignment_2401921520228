package live;

import music.playable;
import music.string.Veena;
import music.wind.saxophone;

class Test {
    public static void main(String[] args){
        // a. Instance of Veena
        Veena v = new Veena();
        v.play();
        // b. Instance of Saxophone
        saxophone s = new saxophone();
        s.play();
        // c. Using Playable reference
        playable p;
        p = new Veena();
        p.play();
        p = new saxophone();
        p.play();
    }
}

