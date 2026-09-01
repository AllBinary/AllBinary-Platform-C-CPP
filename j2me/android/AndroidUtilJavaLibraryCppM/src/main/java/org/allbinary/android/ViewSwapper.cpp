
        /* Generated Code Do Not Modify */
        



            #include <hilog/log.h>
        
            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
#include <android/app/Activity.h>

      
#include <android/view/View.h>

      
#include <android/view/ViewGroup.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ViewSwapper
            : public Object
         {

    public: static const std::vector<View> NULL_VIEW_ARRAY = {};

    private: int32_t rootViewId;

    private: Activity activity;

    private: int32_t currentMainViewId =  -1;

    private: std::vector<View> mainViewArray = ViewSwapper::NULL_VIEW_ARRAY;

    private: std::vector<View> topViewArray = ViewSwapper::NULL_VIEW_ARRAY;

public: ViewSwapper(Activity activity, int32_t rootViewId){
this->activity= activity;
    
this->rootViewId= rootViewId;
    
}


    public: void setMainViews(std::vector<View> viewArray){
this->mainViewArray= viewArray;
    
}


    public: void setTopViewArray(std::vector<View> topViewArray){
this->topViewArray= topViewArray;
    
}


    public: void setMainView(int32_t id){

    ViewGroup viewGroup = this->activity.findViewById(this->rootViewId) as unknown as ViewGroup;;
    

                        if(id != this->currentMainViewId)
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < this->topViewArray.size(); index++)
        {
viewGroup.removeView(this->topViewArray[index]!);
    
}





                        for (
    int32_t index = 0;index < this->mainViewArray.size(); index++)
        {

                        if(id != this->mainViewArray[index]!.getId())
                        
                                    {
                                    viewGroup.removeView(this->mainViewArray[index]!);
    

                                    }
                                
}





                        for (
    int32_t index = 0;index < this->mainViewArray.size(); index++)
        {

                        if(id == this->mainViewArray[index]!.getId())
                        
                                    {
                                    viewGroup.addView(this->mainViewArray[index]!);
    
this->currentMainViewId= id;
    

                                    }
                                
}





                        for (
    int32_t index = 0;index < this->topViewArray.size(); index++)
        {
viewGroup.addView(this->topViewArray[index]!);
    
}


                                    }
                                
}


};

            

