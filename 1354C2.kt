import kotlin.math.*

fun main() 
{
    val PI = acos(-1.0)
    val T = readLine()!!.toInt()
    for (tc in 1..T) 
    {
        val n = readLine()!!.toInt()
        var ans : Double
        if (n % 2 == 0) 
        {
            ans = 1.0 / tan(PI / (2 * n))
        } 
        else 
        {
            ans = cos(PI / (4 * n)) / sin(PI / (2 * n))
        }
        println("%.9f".format(ans))
    }
}
