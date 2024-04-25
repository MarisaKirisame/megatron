prop width;
prop height;
proc main() {
    self.pass0()
}
proc pass0() {
    if has_parent() {
        self.width <- !parent().width;
    } else {
        self.width <- 800;
    };
    self.pass1(0)
}
proc pass1(i) {
    if i < len(children) {
        children[i].pass0()
    } else {
        if len(children) > 0 {
            self.pass2(0, 0)
        } else {
            self.height <- 10;
            if has_parent() {
                parent().pass1(self_pos() + 1);
            } else { }
        };
    }
}
proc pass2(i, s) {
    if i < len(children) {
        self.pass2(i + 1, s + !children[i].height);
    } else {
        self.height <- s;
        if has_parent() {
            parent().pass1(self_pos() + 1);
        } else { }
    }
}