package design_pattern;
//用代码实现泡咖啡
public class coffe {
    public void PrepareRecipe(){
        boilWater();
        brewCoffeBean();
        pourIncup();
        addMikeandSugar();
    }
    public void boilWater(){
        System.out.println("把水烧开");
    }
    public void brewCoffeBean(){
        System.out.println("把咖啡豆放进去");
    }
    public void pourIncup(){
        System.out.println("将咖啡倒入杯中");
    }
    public void addMikeandSugar(){
        System.out.println("加入糖或牛奶");
    }
}
