import kotlin.math.*
fun main() 
{
    val PI = acos(-1.0)
    val T = readLine()!!.toInt()
    for (tc in 1..T) 
    {
        val n = readLine()!!.toInt()
        var ans : Double
        ans = 1/tan(PI/(2*n));
        println("%.9f".format(ans))
    }
}
