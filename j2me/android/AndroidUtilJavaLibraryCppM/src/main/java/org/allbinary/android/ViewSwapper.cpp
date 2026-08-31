
        /* Generated Code Do Not Modify */
        



            #include <hilog/log.h>
        
            #include "../../../java/lang/Object.h"
        
#include <android/app/Activity.h>

      
#include <android/view/View.h>

      
#include <android/view/ViewGroup.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ViewSwapper
            : public Object
         {
        

    public static const NULL_VIEW_ARRAY: std::vector<View> = [];

    private: const rootViewId: int32_t;

    private: const activity: Activity;

    private: currentMainViewId: int32_t =  -1;

    private: mainViewArray: std::vector<View> = ViewSwapper.NULL_VIEW_ARRAY;

    private: topViewArray: std::vector<View> = ViewSwapper.NULL_VIEW_ARRAY;

public constructor (Activity activity, int32_t rootViewId){

            super();
        this.activity= activity;
    
this.rootViewId= rootViewId;
    
}


    public setMainViews(std::vector<View> viewArray){
this.mainViewArray= viewArray;
    
}


    public setTopViewArray(std::vector<View> topViewArray){
this.topViewArray= topViewArray;
    
}


    public setMainView(int32_t id){

    viewGroup: ViewGroup = this.activity.findViewById(this.rootViewId) as unknown as ViewGroup;;
    

                        if(id != this.currentMainViewId)
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < this.topViewArray!.length; index++)
        {
viewGroup!.removeView(this.topViewArray[index]!);
    
}





                        for (
    index: int32_t = 0;index < this.mainViewArray!.length; index++)
        {

                        if(id != this.mainViewArray[index]!.getId())
                        
                                    {
                                    viewGroup!.removeView(this.mainViewArray[index]!);
    

                                    }
                                
}





                        for (
    index: int32_t = 0;index < this.mainViewArray!.length; index++)
        {

                        if(id == this.mainViewArray[index]!.getId())
                        
                                    {
                                    viewGroup!.addView(this.mainViewArray[index]!);
    
this.currentMainViewId= id;
    

                                    }
                                
}





                        for (
    index: int32_t = 0;index < this.topViewArray!.length; index++)
        {
viewGroup!.addView(this.topViewArray[index]!);
    
}


                                    }
                                
}


};

            

