package design_pattern;

public class tea {
    public void PrepareRecipe(){
        boilWater();
        brewTeaBag();
        pourIncup();
        addGouqi();
    }
    public void boilWater(){
        System.out.println("把水烧开");
    }
    public void brewTeaBag(){
        System.out.println("泡茶包");
    }
    public void pourIncup(){
        System.out.println("将茶倒入杯中");
    }
    public void addGouqi(){
        System.out.println("加入枸杞");
    }
}
