class MyHashSet {
public:
    int a[1000001];///�o�D���ΰ}�C
    MyHashSet() {
        for(int i=0;i<=1000000;i++){
            a[i] = 0;///�S���b�̭��A�ť�
        }
    }

    void add(int key) {
        a[key] = 1;///�b�̭�
    }

    void remove(int key) {
        a[key] = 0;///���b�̭�
    }

    bool contains(int key) {
        if(a[key]==1) return true;
        else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
