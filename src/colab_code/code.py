import matplotlib.pyplot as plt

class ModifiedBoustrophedonPathPlanner:
    def __init__(self, area_width, area_height, cell_width):
        self.area_width = area_width
        self.area_height = area_height
        self.cell_width = cell_width
        self.path = []
        self.start = None
        self.goal = None

    def set_start(self, start_x, start_y):
        # Set the start position
        self.start = (start_x, start_y)

    def set_goal(self, goal_x, goal_y):
        # Set the goal position
        self.goal = (goal_x, goal_y)

    def plan_path(self):
        # Start from the initial point
        if self.start:
            self.path.append(self.start)

        num_cells = int(self.area_width / self.cell_width)
        for cell_index in range(num_cells):
            x_start = cell_index * self.cell_width
            x_end = min(x_start + self.cell_width, self.area_width)

            if cell_index % 2 == 0:
                # Move down in even cells
                for y in range(self.area_height):
                    self.path.append((x_start, y))
                    self.path.append((x_end - 1, y))
            else:
                # Move up in odd cells
                for y in range(self.area_height - 1, -1, -1):
                    self.path.append((x_end - 1, y))
                    self.path.append((x_start, y))

        # Move to the goal after covering the area
        if self.goal:
            self.path.append(self.goal)

    def plot_path(self):
        # Plot the path for visualization
        x_coords, y_coords = zip(*self.path)
        plt.figure(figsize=(10, 6))
        plt.plot(x_coords, y_coords, marker='o')

        if self.start:
            plt.scatter(*self.start, color='green', label='Start')
        if self.goal:
            plt.scatter(*self.goal, color='red', label='Goal')

        plt.grid(True)
        plt.xlabel('X Coordinate')
        plt.ylabel('Y Coordinate')
        plt.title('Modified Boustrophedon Path Planning with Start and Goal')
        plt.legend()
        plt.show()

# Example usage
planner = ModifiedBoustrophedonPathPlanner(area_width=10, area_height=10, cell_width=1)
planner.set_start(0, 0) # Set the start location
planner.set_goal(6, 0) # Set the goal location
planner.plan_path()
planner.plot_path()  # This will plot the path

