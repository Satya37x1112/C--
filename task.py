import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score

# Sample data (replace with actual sensor data)
data = {
    'temperature': [70, 75, 80, 72, 85, 78, 90, 82],
    'vibration': [0.5, 0.6, 0.8, 0.55, 0.9, 0.7, 1.2, 0.85],
    'pressure': [100, 105, 110, 102, 115, 108, 120, 112],
    'failure': [0, 0, 0, 0, 0, 0, 1, 0] # 0 for no failure, 1 for failure
}
df = pd.DataFrame(data)

# Separate features (X) and target (y)
X = df[['temperature', 'vibration', 'pressure']]
y = df['failure']

# Split data into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Train a RandomForestClassifier model
model = RandomForestClassifier(n_estimators=100, random_state=42)
model.fit(X_train, y_train)

# Make predictions
y_pred = model.predict(X_test)

# Evaluate the model
accuracy = accuracy_score(y_test, y_pred)
print(f"Model Accuracy: {accuracy}")

# Example prediction for new data
new_sensor_data = pd.DataFrame([[88, 1.1, 118]], columns=['temperature', 'vibration', 'pressure'])
prediction = model.predict(new_sensor_data)
if prediction[0] == 1:
    print("Prediction: Potential equipment failure detected.")
else:
    print("Prediction: Equipment operating normally.")