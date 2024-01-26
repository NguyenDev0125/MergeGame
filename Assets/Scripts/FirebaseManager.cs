using Firebase.Analytics;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class FirebaseManager
{
    // Level_Play_
    public static string LevelPlay = "Level_Play_";
    private static List<string> Constraints = new List<string>();
    public static void LogEvent(string eventName)
    {
        FirebaseAnalytics.LogEvent(eventName);
    }
    public static void LogEvent(string eventName, string ParameterName, string ParameterValue)
    {
        FirebaseAnalytics.LogEvent(eventName, ParameterName, ParameterValue);
    }

    /// <summary>
    /// Thực thi hàm này khi biến 'ConstraintExclusive' chưa được gọi lần nào
    /// </summary>
    /// <param name="EventName">event</param>
    /// <param name="Constraint">Nếu biến này đã được log rồi thì event sễ không thực thi</param>
    public static void LogEventConstraint(string EventName, string ConstraintExclusive)
    {
        if (Constraints.Contains(ConstraintExclusive))
            return;
        Constraints.Add(ConstraintExclusive);
        LogEvent(EventName);
    }
    public static void LogEventConstraint(string EventName, string ParameterName, string ParameterValue, string ConstraintExclusive)
    {
        if (Constraints.Contains(ConstraintExclusive))
            return;
        Constraints.Add(ConstraintExclusive);
        LogEvent(EventName, ParameterName, ParameterValue);
    }
}
