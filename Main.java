import java.util.Scanner;
    public class Main{
        public static void main(String[] args){
            Scanner sc = new Scanner(System.in);
            int path[] = {800, 600, 750, 900, 1400, 1200, 1100, 1500};
            String stops[] = {"TH","GA","IC","HA","TE","LU","NI","CA"};
            String src = sc.nextLine();
            String dest = sc.nextLine();
            int start=0,end=0,s_found=0,d_found=0;
            for(int i=0;i<stops.length;i++){
                if(src.equals(stops[i])){
                    start=i;
                    s_found=1;
                }
                if(dest.equals(stops[i])){
                    end=i;
                    d_found=1;
                }
            }
            if(s_found==0 || d_found==0){
                System.out.println("INVALID OUTPUT");
                return;
            }
            int tot_mtr = 0;
            if(start<end){
                for(int i=start+1;i<=end;i++){
                    tot_mtr+=path[i];
                }
            }
            else if(start>end){
                for(int i=start+1;i<stops.length;i++){
                    tot_mtr+=path[i];
                }
                for(int i=0;i<=end;i++){
                    tot_mtr+=path[i];
                }
            }
            float per_mtr = 5/1000.0f;
            System.out.printf("%.1f INR",Math.ceil(tot_mtr*per_mtr));
            
        }
    }