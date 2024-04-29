prop width;
prop height;
proc main() {
    self.pass0()
}
proc pass0() {
    if has_parent() {
        self.width <- parent().width;
    } else {
        self.width <- 800;
    };
    children.pass0();
    if len(children) > 0 {
       self.height <- sum(children.height);
    } else {
        self.height <- 10;
    }
}
